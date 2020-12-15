#ifndef CUTSPHERE_H
#define CUTSPHERE_H

#include "figurageometrica.h"
#include "sculptor.h"

class CutSphere : public FiguraGeometrica
{
    int xcenter, ycenter, zcenter, radius;

    public:
    /**
     * @brief Define as variáveis da classe com base nos parâmetros
     *
     * @param xcenter coordenada x do centro da esfera
     * @param ycenter coordenada y do centro da esfera
     * @param zcenter coordenada z do centro da esfera
     * @param radius raio da esfera
     */
    CutSphere (int xcenter, int ycenter, int zcenter, int radius);
    ~CutSphere () {}
    /**
     * @brief Instrui a esfera a se retirar do objeto fornecido
     *
     * @param s objeto Sculptor
     */
    void draw (Sculptor& s);
};

#endif