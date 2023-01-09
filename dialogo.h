#ifndef DIALOGO_H
#define DIALOGO_H

#include <QDialog>

namespace Ui {
class Dialogo;
}

class Dialogo : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogo(QWidget *parent = nullptr);
    ~Dialogo();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::Dialogo *ui;
};

#endif // DIALOG_H
