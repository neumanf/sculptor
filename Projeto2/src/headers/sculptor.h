#ifndef SCULPTOR_H
#define SCULPTOR_H

/**
 * @brief Define um voxel.
 *
 */
struct Voxel {
    /**
     * @brief valor correspondente a tonalidade de **vermelho** do voxel dentro do intervalo [0,1],
     * onde 0 representa sua ausência e 1 sua total presença.
     */
    float r;
    /**
     * @brief valor correspondente a tonalidade de **verde** do voxel dentro do intervalo [0,1],
     * onde 0 representa sua ausência e 1 sua total presença.
     */
    float g;
    /**
     * @brief valor correspondente a tonalidade de **azul** do voxel dentro do intervalo [0,1],
     * onde 0 representa sua ausência e 1 sua total presença.
     */
    float b;
    /**
     * @brief valor correspondente a opacidade do voxel dentro do intervalo [0,1],
     * onde 0 representa completa transparência e 1 um voxel opaco.
     */
    float a;

    /**
     * @brief define se o voxel está ativo
     *
     */
    bool isOn;
};

class Sculptor
{
    protected:
    /**
     * @brief Matrix 3D de voxels.
     */
    Voxel*** v;

    /**
     * @brief largura do gride 3D
     */
    int nx;
    /**
     * @brief altura do gride 3D
     */
    int ny;
    /**
     * @brief profundidade do gride 3D
     */
    int nz;

    /**
     * @brief tonalidade de vermelho atual, dentro do intervalo [0,1]
     */
    float r;
    /**
     * @brief tonalidade de verde atual, dentro do intervalo [0,1]
     */
    float g;
    /**
     * @brief tonalidade de azul atual, dentro do intervalo [0,1]
     */
    float b;
    /**
     * @brief opacidade atual, dentro do intervalo [0,1]
     */
    float a;

    public:
    /**
     * @brief Constroi um novo objeto Sculptor e define suas dimensões.
     *
     * @param _nx largura
     * @param _ny altura
     * @param _nz profundidade
     */
    Sculptor (int _nx, int _ny, int _nz);
    /**
     * @brief Destroi o objeto e libera a memória alocada para os voxels.
     */
    ~Sculptor ();
    /**
     * @brief Define a cor do voxel atual.
     *
     * @param r tonalidade de vermelho, dentro do intervalo [0,1]
     * @param g tonalidade de verde, dentro do intervalo [0,1]
     * @param b tonalidade de azul, dentro do intervalo [0,1]
     * @param alpha opacidade, dentro do intervalo [0,1]
     */
    void setColor (float r, float g, float b, float alpha);
    /**
     * @brief Insere um voxel nas coordenadas informadas.
     *
     * @param x
     * @param y
     * @param z
     */
    void putVoxel (int x, int y, int z);
    /**
     * @brief Remove um voxel presente nas coordenadas informadas.
     *
     * @param x
     * @param y
     * @param z
     */
    void cutVoxel (int x, int y, int z);
    /**
     * @brief Insere uma caixa delimitada pelas coordenadas fornececidas.
     *
     * @param x0 coordenada inicial de x
     * @param x1 coordenada final de x
     * @param y0 coordenada inicial de y
     * @param y1 coordenada final de y
     * @param z0 coordenada inicial de z
     * @param z1 coordenada final de z
     */
    void putBox (int x0, int x1, int y0, int y1, int z0, int z1);
    /**
     * @brief Remove uma caixa delimitada pelas coordenadas fornececidas.
     *
     * @param x0 coordenada inicial de x
     * @param x1 coordenada final de x
     * @param y0 coordenada inicial de y
     * @param y1 coordenada final de y
     * @param z0 coordenada inicial de z
     * @param z1 coordenada final de z
     */
    void cutBox (int x0, int x1, int y0, int y1, int z0, int z1);
    /**
     * @brief Insere uma esfera descrita pela equação
     *
     * \f$ (x - x_0)^2 + (y - y_0)^2 + (z - z_0)^2 \leq r^2 \f$
     *
     *
     * @param xcenter coordenada x do centro da esfera
     * @param ycenter coordenada y do centro da esfera
     * @param zcenter coordenada z do centro da esfera
     * @param radius raio da esfera
     */
    void putSphere (int xcenter, int ycenter, int zcenter, int radius);
    /**
     * @brief Remove uma esfera descrita pela equação
     *
     * \f$ (x - x_0)^2 + (y - y_0)^2 + (z - z_0)^2 \leq r^2 \f$
     *
     * @param xcenter coordenada x do centro da esfera
     * @param ycenter coordenada y do centro da esfera
     * @param zcenter coordenada z do centro da esfera
     * @param radius raio da esfera
     */
    void cutSphere (int xcenter, int ycenter, int zcenter, int radius);
    /**
     * @brief Insere um elipsoide descrito pela equação
     *
     * \f$ \frac{(x - x_0)^2}{rx^2} + \frac{(y - y_0)^2}{ry^2} + \frac{(z - z_0)^2}{rz^2} \leq 1 \f$
     *
     * @param xcenter coordenada x do centro do elipsoide
     * @param ycenter coordenada y do centro do elipsoide
     * @param zcenter coordenada z do centro do elipsoide
     * @param rx comprimento do raio na coordenada x
     * @param ry comprimento do raio na coordenada y
     * @param rz comprimento do raio na coordenada z
     */
    void putEllipsoid (int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    /**
     * @brief Remove um elipsoide descrito pela equação
     *
     * \f$ \frac{(x - x_0)^2}{rx^2} + \frac{(y - y_0)^2}{ry^2} + \frac{(z - z_0)^2}{rz^2} \leq 1 \f$
     *
     * @param xcenter coordenada x do centro do elipsoide
     * @param ycenter coordenada y do centro do elipsoide
     * @param zcenter coordenada z do centro do elipsoide
     * @param rx comprimento do raio na coordenada x
     * @param ry comprimento do raio na coordenada y
     * @param rz comprimento do raio na coordenada z
     */
    void cutEllipsoid (int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
    /**
     * @brief Grava a escultura no formato OFF no arquivo filename
     *
     * @param filename nome do arquivo .off a ser criado
     */
    void writeOFF (char* filename);
};

#endif // SCULPTOR_H
