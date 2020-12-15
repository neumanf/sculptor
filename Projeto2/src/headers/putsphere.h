#ifndef PUTSPHERE_H
#define PUTSPHERE_H

#include "figurageometrica.h"
#include "sculptor.h"

class PutSphere : public FiguraGeometrica
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
     * @param r tonalidade de vermelho no intervalo [0, 1]
     * @param g tonalidade de verde no intervalo [0, 1]
     * @param b tonalidade de azul no intervalo [0, 1]
     * @param a opacidade no intervalo [0, 1]
     */
    PutSphere (int xcenter, int ycenter, int zcenter, int radius, float r, float g, float b, float a);
    ~PutSphere () {}
    /**
     * @brief Instrui a esfera a se desenhar no objeto fornecido
     *
     * @param s objeto Sculptor
     */
    void draw (Sculptor& s);
};

#endif