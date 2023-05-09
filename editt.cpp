#include "editt.h"
#include "ui_editt.h"

EDITT::EDITT(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EDITT)
{
    ui->setupUi(this);
}

EDITT::~EDITT()
{
    delete ui;
}

void EDITT::on_pushButton_clicked()
{
    close();
}


void EDITT::on_pushButton_2_clicked()
{
    close();
}

