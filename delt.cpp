#include "delt.h"
#include "ui_delt.h"
#include "dialogdel.h"

Delt::Delt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Delt)
{
    ui->setupUi(this);
}

Delt::~Delt()
{
    delete ui;
}

void Delt::on_pushButton_clicked()
{
    close();
}


void Delt::on_pushButton_2_clicked()
{

}

