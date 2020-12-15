#include "plotter.h"

#include <QPainter>
#include <QBrush>
#include <QPen>
#include <QMouseEvent>
#include <QMessageBox>

#include <QDebug>
#include "sculptor.h"

Plotter::Plotter(QWidget *parent) : QWidget(parent)
{
    xDim = 20;
    yDim = 20;
    zDim = 20;
    currentZ = 0;
    currentObjectId = 0;
    r = 0;
    g = 0;
    b = 0;

    s = new Sculptor(xDim, yDim, zDim);
}

void Plotter::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QBrush brush;
    QPen pen;

    Voxel*** m = s->getMatrix();

    brush.setColor(QColor(255, 255, 255));
    brush.setStyle(Qt::SolidPattern);

    pen.setColor(QColor(0, 0, 0));
    pen.setWidth(1);

    painter.setBrush(brush);
    painter.setPen(pen);
    painter.drawRect(0,0,width(),height());



    for(int i = 0; i < xDim; i++){
        for(int j = 0; j < yDim; j++){
            if(m[i][j][currentZ].isOn){
//                qDebug() << m[i][j][currentZ].r*255;

                brush.setColor(QColor(m[i][j][currentZ].r*255, m[i][j][currentZ].g*255, m[i][j][currentZ].b*255));
                painter.setBrush(brush);

                painter.drawRect(width()*i/xDim, height()*j/yDim, width()/xDim,height()/yDim);

                brush.setColor(QColor(255, 255, 255));
                painter.setBrush(brush);
            }else{
                painter.drawRect(width()*i/xDim, height()*j/yDim, width()/xDim,height()/yDim);
            }
        }
    }
}

void Plotter::mousePressEvent(QMouseEvent *event)
{
    int mouseX = event->x()/(width()/xDim);
    int mouseY = event->y()/(height()/yDim);

    s->setColor(r/255, g/255, b/255, 1.0);

//    qDebug() << currentObjectId;

    switch (currentObjectId) {
    case 0:
        s->putVoxel(mouseX, mouseY, currentZ);
        break;
    case 1:
        s->cutVoxel(mouseX, mouseY, currentZ);
        break;
    case 2:
        s->putBox(mouseX, mouseX + boxXDim, mouseY, mouseY + boxYDim, currentZ, currentZ + boxZDim);
        break;
    case 3:
        s->cutBox(mouseX, mouseX + boxXDim, mouseY, mouseY + boxYDim, currentZ, currentZ + boxZDim);
        break;
    case 4:
        s->putSphere(mouseX, mouseY, currentZ, radius);
        break;
    case 5:
        s->cutSphere(mouseX, mouseY, currentZ, radius);
        break;
    case 6:
        s->putEllipsoid(mouseX, mouseY, currentZ, rx, ry, rz);
        break;
    case 7:
        s->cutEllipsoid(mouseX, mouseY, currentZ, rx, ry, rz);
        break;
    default:
        break;
    }

    repaint();
}

void Plotter::newSculpture()
{
    s->~Sculptor();
    s = new Sculptor(xDim, yDim, zDim);

    repaint();
}

void Plotter::setDimensions(int x, int y, int z)
{
    xDim = x;
    yDim = y;
    zDim = z;
}

void Plotter::setCurrentObjectId(int id)
{
    currentObjectId = id;
}

void Plotter::setZ(int z)
{
    currentZ = z;
    repaint();
}

void Plotter::setR(int _r)
{
    r = _r;
}

void Plotter::setG(int _g)
{
    g = _g;
}

void Plotter::setB(int _b)
{
    b = _b;
}

void Plotter::setRadius(int _radius)
{
    radius = _radius;
}

void Plotter::setRx(int _rx)
{
    rx = _rx;
}


void Plotter::setRy(int _ry)
{
    ry = _ry;
}


void Plotter::setRz(int _rz)
{
    rz = _rz;
}

void Plotter::setBoxXDim(int _boxXDim)
{
    boxXDim = _boxXDim;
}

void Plotter::setBoxYDim(int _boxYDim)
{
    boxYDim = _boxYDim;
}

void Plotter::setBoxZDim(int _boxZDim)
{
    boxZDim = _boxZDim;
}

void Plotter::saveToFile()
{
    QMessageBox msgBox;

    s->writeOFF((char*) "escultura.off");

    msgBox.setIcon(QMessageBox::Information);
    msgBox.setText("Escultura salva com sucesso.");
    msgBox.exec();
}
