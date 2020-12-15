#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>

#include "sculptor.h"

class Plotter : public QWidget
{
    Q_OBJECT

private:
    int xDim, yDim, zDim;
    int currentZ;
    int currentObjectId;
    int r, g, b;
    int radius, rx, ry, rz;
    int boxXDim,boxYDim, boxZDim;

public:
    explicit Plotter(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    /**
     * @brief Lida com um evento de pressionar o botão do mouse
     * @param event
     */
    void mousePressEvent(QMouseEvent *event);
    /**
     * @brief Cria uma nova escultura com base nos parâmetros atuais
     */
    void newSculpture(void);
    /**
     * @brief Atribui novas dimensões
     * @param x
     * @param y
     * @param z
     */
    void setDimensions(int x, int y, int z);
    /**
     * @brief Atribui o id do objeto selecionado ao objeto atual
     * @param id id do objeto selecionado, variando de [0,7]
     */
    void setCurrentObjectId(int id);
    /**
     * @brief Atribui um novo valor à variável que controla a coordenada Z no plano XY
     * @param z nova coordenada z
     */
    void setZ(int z);
    /**
     * @brief Atribui um novo valor de cor vermelha ao pincel
     * @param _r nova tonalidade de vermelho, variando de [0,255]
     */
    void setR(int _r);
    /**
     * @brief Atribui um novo valor de cor verde ao pincel
     * @param _g nova tonalidade de verde, variando de [0,255]
     */
    void setG(int _g);
    /**
     * @brief Atribui um novo valor de cor azul ao pincel
     * @param _b nova tonalidade de azul, variando de [0,255]
     */
    void setB(int _b);
    /**
     * @brief Atribui um novo raio de esfera
     * @param _radius novo raio
     */
    void setRadius(int _radius);
    /**
     * @brief Atribui um valor de raio para a coordenada x do elipsoide
     * @param _rx novo rx
     */
    void setRx(int _rx);
    /**
     * @brief Atribui um valor de raio para a coordenada y do elipsoide
     * @param _ry novo ry
     */
    void setRy(int _ry);
    /**
     * @brief Atribui um valor de raio para a coordenada z do elipsoide
     * @param _rz novo rz
     */
    void setRz(int _rz);
    /**
     * @brief Atribui uma nova dimensão na coordenada x da caixa
     * @param _boxXDim nova dimensão x
     */
    void setBoxXDim(int _boxXDim);
    /**
     * @brief Atribui uma nova dimensão na coordenada y da caixa
     * @param _boxXDim nova dimensão y
     */
    void setBoxYDim(int _boxYDim);
    /**
     * @brief Atribui uma nova dimensão na coordenada z da caixa
     * @param _boxXDim nova dimensão z
     */
    void setBoxZDim(int _boxZDim);
    /**
     * @brief Salva a escultura atual em formato .off
     */
    void saveToFile();

    /**
     * @brief Objeto escultor
     */
    Sculptor *s;

public slots:
};

#endif // PLOTTER_H
