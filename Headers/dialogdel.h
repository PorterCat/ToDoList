#ifndef DIALOGDEL_H
#define DIALOGDEL_H

#include <QDialog>

namespace Ui {
class DialogDEL;
}

class DialogDEL : public QDialog
{
    Q_OBJECT

public:
    explicit DialogDEL(QWidget *parent = nullptr);
    ~DialogDEL();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::DialogDEL *ui;
};

#endif // DIALOGDEL_H
