#include "dialogdel.h"
#include "ui_dialogdel.h"

DialogDEL::DialogDEL(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogDEL)
{
    ui->setupUi(this);
}

DialogDEL::~DialogDEL()
{
    delete ui;
}

void DialogDEL::on_buttonBox_accepted()
{
    close();
}

