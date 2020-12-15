#include "headers/putellipsoid.h"

PutEllipsoid::PutEllipsoid (int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, float r, float g, float b, float a)
{
    this->xcenter = xcenter;
    this->ycenter = ycenter;
    this->zcenter = zcenter;
    this->rx = rx;
    this->ry = ry;
    this->rz = rz;

    this->r = r;
    this->g = g;
    this->b = b;
    this->a = a;
}

void PutEllipsoid::draw (Sculptor& s)
{
    s.setColor (r, g, b, a);

    for (int i = xcenter - rx; i < xcenter + rx; i++) {
        for (int j = ycenter - ry; j < ycenter + ry; j++) {
            for (int k = zcenter - rz; k < zcenter + rz; k++) {
                if (((i - xcenter) * (i - xcenter)) / (float)(rx * rx) +
                    ((j - ycenter) * (j - ycenter)) / (float)(ry * ry) +
                    ((k - zcenter) * (k - zcenter)) / (float)(rz * rz) <=
                    1) {
                    s.putVoxel (i, j, k);
                }
            }
        }
    }
}
