#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:\\Users\\sirotir\\Desktop\\ToDo\\kursovaya.sqlite");
    if (!db.open()) {
          qDebug() << db.lastError().text();
          return;
    }
    else{
        qDebug()<<"db found";
    }
    model = new QSqlTableModel(this, db);
    model->setTable("task");
    model->select();
    QSqlQuery query = QSqlQuery(db);
    if (!query.exec("select * from task")){
        qDebug()<<query.lastError().databaseText();
        qDebug()<<query.lastError().driverText();
        return;
    }
    while(query.next()){
      qDebug()<<query.record();
    }
    ui->tableAll->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    qDebug() << "inserting row" << model->insertRow(model->rowCount());
}


void MainWindow::on_pushButton_2_clicked()
{
    int selectedrow = ui->tableAll->currentIndex().row();
    if(selectedrow >= 0){
        qDebug()<<"deleting row" << model->removeRow(selectedrow);
    }
    else{
        qDebug()<<"no row selected";
    }
}

void MainWindow::on_pushButton_4_clicked()
{

}


void MainWindow::on_tabWidget_tabBarClicked(int index)
{
    QSqlQueryModel *setquery1 = new QSqlQueryModel;
    setquery1->setQuery("SELECT * FROM task WHERE status=0");
    QTableView *tv = new QTableView(this);
    tv->setModel(setquery1);
    ui->tableActive->setModel(setquery1);
    QSqlQueryModel *setquery2 = new QSqlQueryModel;
    setquery2->setQuery("SELECT * FROM task WHERE status=1");
    QTableView *tv1 = new QTableView(this);
    tv1->setModel(setquery2);
    ui->tableFailed->setModel(setquery2);
    QSqlQueryModel *setquery3 = new QSqlQueryModel;
    setquery3->setQuery("SELECT * FROM task WHERE status=2");
    QTableView *tv2 = new QTableView(this);
    tv2->setModel(setquery3);
    ui->tableComplited->setModel(setquery3);
}

