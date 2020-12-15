#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "newsculpturedialog.h"
#include <QDebug>
#include <QProcess>
#include <printf.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openNewSculptureDialog()
{
    NewSculptureDialog d;

    if(d.exec() == QDialog::Accepted){
        ui->widget->setDimensions(d.getDimensions()[0], d.getDimensions()[1], d.getDimensions()[2]);
        ui->widget->newSculpture();
    }

}

void MainWindow::on_spinBox_13_valueChanged(int arg1)
{
    ui->widget->setZ(arg1);
}

void MainWindow::on_spinBox_8_valueChanged(int arg1)
{
    ui->widget->setR(arg1);
}

void MainWindow::on_spinBox_9_valueChanged(int arg1)
{
    ui->widget->setG(arg1);
}

void MainWindow::on_spinBox_10_valueChanged(int arg1)
{
    ui->widget->setB(arg1);
}

void MainWindow::on_spinBox_valueChanged(int arg1)
{
    ui->widget->setRadius(arg1);
}

void MainWindow::on_spinBox_2_valueChanged(int arg1)
{
    ui->widget->setRx(arg1);
}

void MainWindow::on_spinBox_3_valueChanged(int arg1)
{
    ui->widget->setRy(arg1);
}

void MainWindow::on_spinBox_4_valueChanged(int arg1)
{
    ui->widget->setRz(arg1);
}

void MainWindow::on_spinBox_5_valueChanged(int arg1)
{
    ui->widget->setBoxXDim(arg1);
}

void MainWindow::on_spinBox_6_valueChanged(int arg1)
{
    ui->widget->setBoxYDim(arg1);
}

void MainWindow::on_spinBox_7_valueChanged(int arg1)
{
    ui->widget->setBoxZDim(arg1);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->widget->setCurrentObjectId(0);
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->widget->setCurrentObjectId(1);
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->widget->setCurrentObjectId(2);
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->widget->setCurrentObjectId(3);
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->widget->setCurrentObjectId(4);
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->widget->setCurrentObjectId(5);
}

void MainWindow::on_pushButton_8_clicked()
{
    ui->widget->setCurrentObjectId(6);
}

void MainWindow::on_pushButton_9_clicked()
{
    ui->widget->setCurrentObjectId(7);
}

void MainWindow::on_pushButton_11_clicked()
{
    ui->widget->saveToFile();
}

void MainWindow::on_pushButton_10_clicked()
{
    ui->widget->saveToFile();

    QProcess process;
    process.start("geomview", QStringList() << "escultura.off");
    process.waitForFinished();
}
