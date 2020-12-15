#ifndef CUTVOXEL_H
#define CUTVOXEL_H

#include "figurageometrica.h"
#include "sculptor.h"

class CutVoxel : public FiguraGeometrica
{
    int x, y, z;

    public:
    /**
     * @brief Define as variáveis da classe com base nos parâmetros
     *
     * @param x coordenada x do voxel
     * @param y coordenada y do voxel
     * @param z coordenada z do voxel
     */
    CutVoxel (int x, int y, int z);
    ~CutVoxel () {}
    /**
     * @brief Instrui o voxel a se retirar do objeto fornecido
     *
     * @param s objeto Sculptor
     */
    void draw (Sculptor& s);
};

#endif