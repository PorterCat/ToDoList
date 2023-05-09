#ifndef ADDT_H
#define ADDT_H

#include <QWidget>

namespace Ui {
class Addt;
}

class Addt : public QWidget
{
    Q_OBJECT

public:
    explicit Addt(QWidget *parent = nullptr);
    ~Addt();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Addt *ui;
};

#endif // ADDT_H
