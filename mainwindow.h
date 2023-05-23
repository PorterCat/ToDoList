#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QsqlTableModel>
#include <QSqlQueryModel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QSqlDatabase db;
    QSqlTableModel* model;
    Ui::MainWindow *ui;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_tabWidget_tabBarClicked(int index);

private:
    QSqlTableModel* model1;
};

#endif // MAINWINDOW_H
