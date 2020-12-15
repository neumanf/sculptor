#ifndef PUTBOX_H
#define PUTBOX_H

#include "figurageometrica.h"
#include "sculptor.h"

class PutBox : public FiguraGeometrica
{
    int x0, x1, y0, y1, z0, z1;

    public:
    /**
     * @brief Define as variáveis da classe com base nos parâmetros
     *
     * @param x0 coordenada inicial de x
     * @param x1 coordenada final de x
     * @param y0 coordenada inicial de y
     * @param y1 coordenada final de y
     * @param z0 coordenada inicial de z
     * @param z1 coordenada final de z
     * @param r tonalidade de vermelho no intervalo [0, 1]
     * @param g tonalidade de verde no intervalo [0, 1]
     * @param b tonalidade de azul no intervalo [0, 1]
     * @param a opacidade no intervalo [0, 1]
     */
    PutBox (int x0, int x1, int y0, int y1, int z0, int z1, float r, float g, float b, float a);
    ~PutBox () {}
    /**
     * @brief Instrui o cubo a se desenhar no objeto fornecido
     *
     * @param s objeto Sculptor
     */
    void draw (Sculptor& s);
};

#endif