#include <mainwindow.h>
#include <ui_mainwindow.h>
#include <QDate>
#include <QTime>
#include <QDebug>
#include <QString>
#include <QDir>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QDate system_date;
    system_date = QDate::currentDate();
        QString str1 = system_date.toString("yyyy-MM-dd");

    QString databasePath = QDir::currentPath() + "/../kursovaya.sqlite";
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(databasePath);

    if (!db.open()) {

          return;
    }
    else{
    }

    QSqlQuery query = QSqlQuery(db);

    query.exec("select * from task");

    while(query.next()){
    }
    query.prepare("Update task SET status = 1 WHERE Date < :str AND status = 0");
    query.bindValue(":str", str1);
    query.exec();

    model = new QSqlTableModel(this, db);
    model->setTable("task");
    model->select();
    ui->tableAll->setModel(model);
    ui->tableAll->hideColumn(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    model->insertRow(model->rowCount());
}


void MainWindow::on_pushButton_2_clicked()
{
    int selectedrow = ui->tableAll->currentIndex().row();
    if(selectedrow >= 0){
        model->removeRow(selectedrow);
    }
    else{
    }
}

void MainWindow::on_tabWidget_tabBarClicked(int index)
{
    QSqlQueryModel *setquery1 = new QSqlQueryModel;
    setquery1->setQuery("SELECT * FROM task WHERE status=0");
    QTableView *tv = new QTableView(this);
    tv->setModel(setquery1);
    ui->tableActive->setModel(setquery1);
    ui->tableActive->hideColumn(0);

    QSqlQueryModel *setquery2 = new QSqlQueryModel;
    setquery2->setQuery("SELECT * FROM task WHERE status=1");
    QTableView *tv2 = new QTableView(this);
    tv2->setModel(setquery2);
    ui->tableFailed->setModel(setquery2);
    ui->tableFailed->hideColumn(0);

    QSqlQueryModel *setquery3 = new QSqlQueryModel;
    setquery3->setQuery("SELECT * FROM task WHERE status=2");
    QTableView *tv3 = new QTableView(this);
    tv3->setModel(setquery3);
    ui->tableComplited->setModel(setquery3);
    ui->tableComplited->hideColumn(0);

    model1 = new QSqlTableModel(this, db);
    model1->setTable("task");
    model1->select();
    ui->tableAll->setModel(model1);
    ui->tableAll->hideColumn(0);
}
