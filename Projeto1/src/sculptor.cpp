#include "sculptor.h"

#include <fstream>
#include <iostream>
#include <sstream>

Sculptor::Sculptor (int _nx, int _ny, int _nz)
{
    nx = _nx;
    ny = _ny;
    nz = _nz;

    v = new Voxel**[nx];
    if (v == nullptr) exit (0);

    v[0] = new Voxel*[nx * ny];
    if (v[0] == nullptr) exit (0);

    v[0][0] = new Voxel[nx * ny * nz];
    if (v[0][0] == nullptr) exit (0);

    for (int i = 0; i < nx; i++) {
        if (i < (nx - 1)) {
            v[i + 1] = v[i] + ny;
        }
        for (int j = 1; j < ny; j++) {
            v[i][j] = v[i][j - 1] + nz;
            if (i != (nx - 1) && j == ny - 1) {
                v[i + 1][0] = v[i][j] + nz;
            }
        }
    }

    for (int i = 0; i < nx; i++) {
        for (int j = 0; j < ny; j++) {
            for (int k = 0; k < nz; k++) {
                v[i][j][k].isOn = false;
            }
        }
    }
}

Sculptor::~Sculptor ()
{
    delete[] v[0][0];
    delete[] v[0];
    delete[] v;
}

void Sculptor::setColor (float r, float g, float b, float alpha)
{
    auto setCurrentColor = [&] (float number, float* color) {
        if (number > 1) {
            *color = 1;
        } else if (number < 0) {
            *color = 0;
        } else {
            *color = number;
        }
    };

    setCurrentColor (r, &this->r);
    setCurrentColor (g, &this->g);
    setCurrentColor (b, &this->b);
    setCurrentColor (alpha, &this->a);
}

void Sculptor::putVoxel (int x, int y, int z)
{
    if ((x >= 0 && x < nx) && (y >= 0 && y < ny) && (z >= 0 && z < nz)) {
        v[x][y][z].r = r;
        v[x][y][z].g = g;
        v[x][y][z].b = b;
        v[x][y][z].a = a;
        v[x][y][z].isOn = true;
    }
}

void Sculptor::cutVoxel (int x, int y, int z)
{
    if ((x >= 0 && x < nx) && (y >= 0 && y < ny) && (z >= 0 && z < nz)) {
        v[x][y][z].isOn = false;
    }
}

void Sculptor::putBox (int x0, int x1, int y0, int y1, int z0, int z1)
{
    for (int i = 0; i < nx; i++) {
        for (int j = 0; j < ny; j++) {
            for (int k = 0; k < nz; k++) {
                if ((i >= x0 && i <= x1) && (j >= y0 && j <= y1) && (k >= z0 && k <= z1))
                    putVoxel (i, j, k);
            }
        }
    }
}

void Sculptor::cutBox (int x0, int x1, int y0, int y1, int z0, int z1)
{
    for (int i = 0; i < nx; i++) {
        for (int j = 0; j < ny; j++) {
            for (int k = 0; k < nz; k++) {
                if ((i >= x0 && i <= x1) && (j >= y0 && j <= y1) && (k >= z0 && k <= z1))
                    cutVoxel (i, j, k);
            }
        }
    }
}

void Sculptor::putSphere (int xcenter, int ycenter, int zcenter, int radius)
{
    for (int i = 0; i < nx; i++) {
        for (int j = 0; j < ny; j++) {
            for (int k = 0; k < nz; k++) {
                if (((i - xcenter) * (i - xcenter) + (j - ycenter) * (j - ycenter) +
                     (k - zcenter) * (k - zcenter)) <= radius * radius)
                    putVoxel (i, j, k);
            }
        }
    }
}

void Sculptor::cutSphere (int xcenter, int ycenter, int zcenter, int radius)
{
    for (int i = 0; i < nx; i++) {
        for (int j = 0; j < ny; j++) {
            for (int k = 0; k < nz; k++) {
                if (((i - xcenter) * (i - xcenter) + (j - ycenter) * (j - ycenter) +
                     (k - zcenter) * (k - zcenter)) <= radius * radius)
                    cutVoxel (i, j, k);
            }
        }
    }
}

void Sculptor::putEllipsoid (int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)
{
    for (int i = 0; i < nx; i++) {
        for (int j = 0; j < ny; j++) {
            for (int k = 0; k < nz; k++) {
                if (((i - xcenter) * (i - xcenter)) / (float)(rx * rx) +
                    ((j - ycenter) * (j - ycenter)) / (float)(ry * ry) +
                    ((k - zcenter) * (k - zcenter)) / (float)(rz * rz) <=
                    1) {
                    putVoxel (i, j, k);
                }
            }
        }
    }
}

void Sculptor::cutEllipsoid (int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)
{
    for (int i = 0; i < nx; i++) {
        for (int j = 0; j < ny; j++) {
            for (int k = 0; k < nz; k++) {
                if (((i - xcenter) * (i - xcenter)) / (float)(rx * rx) +
                    ((j - ycenter) * (j - ycenter)) / (float)(ry * ry) +
                    ((k - zcenter) * (k - zcenter)) / (float)(rz * rz) <=
                    1) {
                    cutVoxel (i, j, k);
                }
            }
        }
    }
}

void Sculptor::writeOFF (char* filename)
{
    std::ofstream fout;

    int voxelsCount = 0;
    int currentVoxel = 0;

    for (int i = 0; i < nx; i++)
        for (int j = 0; j < ny; j++)
            for (int k = 0; k < nz; k++)
                if (v[i][j][k].isOn) voxelsCount++;

    fout.open (filename);

    fout << "OFF\n";
    fout << voxelsCount * 8 << " " << voxelsCount * 6 << " 0\n";

    for (int i = 0; i < nx; i++) {
        for (int j = 0; j < ny; j++) {
            for (int k = 0; k < nz; k++) {
                if (v[i][j][k].isOn) {
                    fout << i - 0.5 << " " << j + 0.5 << " " << k - 0.5 << std::endl;
                    fout << i - 0.5 << " " << j - 0.5 << " " << k - 0.5 << std::endl;
                    fout << i + 0.5 << " " << j - 0.5 << " " << k - 0.5 << std::endl;
                    fout << i + 0.5 << " " << j + 0.5 << " " << k - 0.5 << std::endl;
                    fout << i - 0.5 << " " << j + 0.5 << " " << k + 0.5 << std::endl;
                    fout << i - 0.5 << " " << j - 0.5 << " " << k + 0.5 << std::endl;
                    fout << i + 0.5 << " " << j - 0.5 << " " << k + 0.5 << std::endl;
                    fout << i + 0.5 << " " << j + 0.5 << " " << k + 0.5 << std::endl;
                }
            }
        }
    }

    for (int i = 0; i < nx; i++) {
        for (int j = 0; j < ny; j++) {
            for (int k = 0; k < nz; k++) {
                if (v[i][j][k].isOn) {
                    fout << "4 " << 0 + 8 * currentVoxel << " " << 3 + 8 * currentVoxel << " "
                         << 2 + 8 * currentVoxel << " " << 1 + 8 * currentVoxel << " " << v[i][j][k].r << " "
                         << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << std::endl;
                    fout << "4 " << 4 + 8 * currentVoxel << " " << 5 + 8 * currentVoxel << " "
                         << 6 + 8 * currentVoxel << " " << 7 + 8 * currentVoxel << " " << v[i][j][k].r << " "
                         << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << std::endl;
                    fout << "4 " << 0 + 8 * currentVoxel << " " << 1 + 8 * currentVoxel << " "
                         << 5 + 8 * currentVoxel << " " << 4 + 8 * currentVoxel << " " << v[i][j][k].r << " "
                         << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << std::endl;
                    fout << "4 " << 0 + 8 * currentVoxel << " " << 4 + 8 * currentVoxel << " "
                         << 7 + 8 * currentVoxel << " " << 3 + 8 * currentVoxel << " " << v[i][j][k].r << " "
                         << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << std::endl;
                    fout << "4 " << 3 + 8 * currentVoxel << " " << 7 + 8 * currentVoxel << " "
                         << 6 + 8 * currentVoxel << " " << 2 + 8 * currentVoxel << " " << v[i][j][k].r << " "
                         << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << std::endl;
                    fout << "4 " << 1 + 8 * currentVoxel << " " << 2 + 8 * currentVoxel << " "
                         << 6 + 8 * currentVoxel << " " << 5 + 8 * currentVoxel << " " << v[i][j][k].r << " "
                         << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << std::endl;
                    currentVoxel++;
                }
            }
        }
    }

    fout.close ();
}
