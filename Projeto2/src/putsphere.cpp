#include "headers/putsphere.h"

PutSphere::PutSphere (int xcenter, int ycenter, int zcenter, int radius, float r, float g, float b, float a)
{
    this->xcenter = xcenter;
    this->ycenter = ycenter;
    this->zcenter = zcenter;
    this->radius = radius;

    this->r = r;
    this->g = g;
    this->b = b;
    this->a = a;
}

void PutSphere::draw (Sculptor& s)
{
    s.setColor (r, g, b, a);

    for (int i = xcenter - radius; i < xcenter + radius; i++) {
        for (int j = ycenter - radius; j < ycenter + radius; j++) {
            for (int k = zcenter - radius; k < zcenter + radius; k++) {
                if (((i - xcenter) * (i - xcenter) + (j - ycenter) * (j - ycenter) +
                     (k - zcenter) * (k - zcenter)) <= radius * radius)
                    s.putVoxel (i, j, k);
            }
        }
    }
}