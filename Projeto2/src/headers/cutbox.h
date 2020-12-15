#ifndef CUTBOX_H
#define CUTBOX_H

#include "figurageometrica.h"
#include "sculptor.h"

class CutBox : public FiguraGeometrica
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
     */
    CutBox (int x0, int x1, int y0, int y1, int z0, int z1);
    ~CutBox () {}
    /**
     * @brief Instrui o cubo a se retirar do objeto fornecido
     *
     * @param s objeto Sculptor
     */
    void draw (Sculptor& s);
};

#endif