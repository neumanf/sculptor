#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H

#include "figurageometrica.h"
#include "sculptor.h"

class PutEllipsoid : public FiguraGeometrica
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
     * @param r tonalidade de vermelho no intervalo [0, 1]
     * @param g tonalidade de verde no intervalo [0, 1]
     * @param b tonalidade de azul no intervalo [0, 1]
     * @param a opacidade no intervalo [0, 1]
     */
    PutEllipsoid (int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, float r, float g, float b, float a);
    ~PutEllipsoid () {}
    /**
     * @brief Instrui o elipsoide a se desenhar no objeto fornecido
     *
     * @param s objeto Sculptor
     */
    void draw (Sculptor& s);
};

#endif