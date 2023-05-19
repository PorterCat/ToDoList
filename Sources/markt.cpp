#include "markt.h"
#include "ui_markt.h"

Markt::Markt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Markt)
{
    ui->setupUi(this);
}

Markt::~Markt()
{
    delete ui;
}

void Markt::on_pushButton_clicked()
{
    close();
}


void Markt::on_pushButton_2_clicked()
{
    close();
}

