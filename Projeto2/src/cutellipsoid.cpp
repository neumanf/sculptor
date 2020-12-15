#include "headers/cutellipsoid.h"

CutEllipsoid::CutEllipsoid (int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)
{
    this->xcenter = xcenter;
    this->ycenter = ycenter;
    this->zcenter = zcenter;
    this->rx = rx;
    this->ry = ry;
    this->rz = rz;
}

void CutEllipsoid::draw (Sculptor& s)
{
    for (int i = xcenter - rx; i < xcenter + rx; i++) {
        for (int j = ycenter - ry; j < ycenter + ry; j++) {
            for (int k = zcenter - rz; k < zcenter + rz; k++) {
                if (((i - xcenter) * (i - xcenter)) / (float)(rx * rx) +
                    ((j - ycenter) * (j - ycenter)) / (float)(ry * ry) +
                    ((k - zcenter) * (k - zcenter)) / (float)(rz * rz) <=
                    1) {
                    s.cutVoxel (i, j, k);
                }
            }
        }
    }
}