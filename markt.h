#ifndef MARKT_H
#define MARKT_H

#include <QWidget>

namespace Ui {
class Markt;
}

class Markt : public QWidget
{
    Q_OBJECT

public:
    explicit Markt(QWidget *parent = nullptr);
    ~Markt();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Markt *ui;
};

#endif // MARKT_H
