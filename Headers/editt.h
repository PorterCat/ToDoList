#ifndef EDITT_H
#define EDITT_H

#include <QWidget>

namespace Ui {
class EDITT;
}

class EDITT : public QWidget
{
    Q_OBJECT

public:
    explicit EDITT(QWidget *parent = nullptr);
    ~EDITT();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::EDITT *ui;
};

#endif // EDITT_H
