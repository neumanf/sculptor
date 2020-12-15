#ifndef NEWSCULPTUREDIALOG_H
#define NEWSCULPTUREDIALOG_H

#include <QDialog>

namespace Ui {
class NewSculptureDialog;
}

/**
 * @brief Cria a caixa de diálogo responsável por obter as dimensões de uma nova escultura.
 */
class NewSculptureDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NewSculptureDialog(QWidget *parent = nullptr);
    ~NewSculptureDialog();
    /**
     * @brief Obtém as dimensões fornecidas pelo usuário
     * @return
     */
    std::array<int,3> getDimensions();

private:
    Ui::NewSculptureDialog *ui;
};

#endif // NEWSCULPTUREDIALOG_H
