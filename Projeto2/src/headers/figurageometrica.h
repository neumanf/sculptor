#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "sculptor.h"

class FiguraGeometrica
{
    protected:
    /**
     * @brief tonalidade de vermelho atual
     */
    float r;
    /**
     * @brief tonalidade de verde atual
     */
    float g;
    /**
     * @brief tonalidade de azul atual
     */
    float b;
    /**
     * @brief opacidade atual
     */
    float a;

    public:
    virtual ~FiguraGeometrica (){};
    /**
     * @brief Instrui o objeto a se desenhar em um objeto do tipo Sculptor
     *
     * @param s objeto Sculptor
     */
    virtual void draw (Sculptor& s) = 0;
};

#endif