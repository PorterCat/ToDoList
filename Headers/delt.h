#ifndef DELT_H
#define DELT_H

#include <QWidget>

namespace Ui {
class Delt;
}

class Delt : public QWidget
{
    Q_OBJECT

public:
    explicit Delt(QWidget *parent = nullptr);
    ~Delt();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Delt *ui;
};

#endif // DELT_H
