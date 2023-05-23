#include "mainwindow.h"
#include <QObject>

class test_Smart : public QObject
{
    Q_OBJECT;
public:
    explicit test_Smart(QObject *parent = 0);

private slots:
    void DbOpen(QSqlDatabase db);
};

