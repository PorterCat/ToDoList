#include "addt.h"
#include "ui_addt.h"

Addt::Addt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Addt)
{
    ui->setupUi(this);
}

Addt::~Addt()
{
    delete ui;
}

void Addt::on_pushButton_clicked()// "close" button
{
    close();
}


void Addt::on_pushButton_2_clicked() // "ok" button
{
    close();
}

