#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H

#include "figurageometrica.h"
#include "sculptor.h"

class CutEllipsoid : public FiguraGeometrica
{
    int xcenter, ycenter, zcenter, rx, ry, rz;

    public:
    /**
     * @brief Define as variáveis da classe com base nos parâmetros
     *
     * @param xcenter coordenada x do centro do elipsoide
     * @param ycenter coordenada y do centro do elipsoide
     * @param zcenter coordenada z do centro do elipsoide
     * @param rx comprimento do raio na coordenada x
     * @param ry comprimento do raio na coordenada y
     * @param rz comprimento do raio na coordenada z
     */
    CutEllipsoid (int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    ~CutEllipsoid () {}
    /**
     * @brief Instrui o elipsoide a se retirar do objeto fornecido
     *
     * @param s objeto Sculptor
     */
    void draw (Sculptor& s);
};

#endif