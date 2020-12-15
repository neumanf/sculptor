#ifndef PUTVOXEL_H
#define PUTVOXEL_H

#include "figurageometrica.h"
#include "sculptor.h"

class PutVoxel : public FiguraGeometrica
{
    int x, y, z;

    public:
    /**
     * @brief Define as variáveis da classe com base nos parâmetros
     *
     * @param x coordenada x do voxel
     * @param y coordenada y do voxel
     * @param z coordenada z do voxel
     * @param r tonalidade de vermelho no intervalo [0, 1]
     * @param g tonalidade de verde no intervalo [0, 1]
     * @param b tonalidade de azul no intervalo [0, 1]
     * @param a opacidade no intervalo [0, 1]
     */
    PutVoxel (int x, int y, int z, float r, float g, float b, float a);
    ~PutVoxel () {}
    /**
     * @brief Instrui o voxel a se desenhar no objeto fornecido
     *
     * @param s objeto Sculptor
     */
    void draw (Sculptor& s);
};

#endif