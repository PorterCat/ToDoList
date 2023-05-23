#include "test.h"
#include "mainwindow.h"
#include <QtTest>

test_Smart::test_Smart(QObject *parent) :
    QObject(parent)
{

}

void test_Smart::DbOpen()
{
    MainWindow a;
    QCOMPARE(a.db.open(), 1);

};

void test_Smart::Status_validator()
{
    MainWindow a;
    QSqlQuery query = QSqlQuery(a.db);
    query.exec("select * from task");
    while (query.next()) {
        QCOMPARE((query.value(2).toInt() == 0 or query.value(2).toInt() == 1 or query.value(2).toInt() == 2), 1);
    }
};

void test_Smart::Year_validator()
{
    MainWindow a;
    QSqlQuery query = QSqlQuery(a.db);
    query.exec("select * from task");
    while (query.next()) {
        QString year = query.value(3).toString();
        year.chop(6);
        bool ok;
        int yeaar = year.toInt(&ok, 10);
        QCOMPARE_LE(yeaar,2150);
    }
};

void test_Smart::Month_validator()
{
    MainWindow a;
    QSqlQuery query = QSqlQuery(a.db);
    query.exec("select * from task");
    while (query.next()) {
        QString month = query.value(3).toString();
        month.chop(3);
        month = month.sliced(5);
        bool ok;
        int moonth = month.toInt(&ok, 10);
        QCOMPARE_LE(moonth,12);
    }
};

void test_Smart::Day_validator()
{
    MainWindow a;
    QSqlQuery query = QSqlQuery(a.db);
    query.exec("select * from task");
    while (query.next()) {
        QString day = query.value(3).toString();
        day = day.sliced(8);
        bool ok;
        int daay = day.toInt(&ok, 10);
        QCOMPARE_LE(daay,31);
    }
};

void test_Smart::Add_func()
{
    MainWindow a;
    QCOMPARE(a.model->insertRow(a.model->rowCount()),1);
};

void test_Smart::Dell_func()
{
    MainWindow a;
    QCOMPARE(a.model->removeRow(true),0);
};
