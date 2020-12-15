#ifndef INTERPRETADOR_H
#define INTERPRETADOR_H

#include <string>
#include <vector>

#include "figurageometrica.h"

class Interpretador
{
    int dimx, dimy, dimz;
    float r, g, b, a;

    public:
    Interpretador ();
    /**
     * @brief Obtem os parâmetros do arquivo de entrada, cria um novo objeto e o armazena em um vetor de FiguraGeometrica
     *
     * @param filename caminho do arquivo
     * @return std::vector<FiguraGeometrica*>
     */
    std::vector<FiguraGeometrica*> parse (std::string filename);
    /**
     * @brief Obtem a dimensão x do objeto
     *
     * @return int
     */
    int getDimx ();
    /**
     * @brief Obtem a dimensão y do objeto
     *
     * @return int
     */
    int getDimy ();
    /**
     * @brief Obtem a dimensão z do objeto
     *
     * @return int
     */
    int getDimz ();
};

#endif