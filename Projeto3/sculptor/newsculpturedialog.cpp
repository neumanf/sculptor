#include "newsculpturedialog.h"
#include "ui_newsculpturedialog.h"

NewSculptureDialog::NewSculptureDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewSculptureDialog)
{
    ui->setupUi(this);
}

NewSculptureDialog::~NewSculptureDialog()
{
    delete ui;
}

std::array<int, 3> NewSculptureDialog::getDimensions()
{
    std::array<int, 3> dimensions = {
        ui->xDimBox->value(),
        ui->yDimBox->value(),
        ui->zDimBox->value()
    };

    return dimensions;
}
