#include <QObject>

class test_Smart : public QObject
{
    Q_OBJECT;
public:
    explicit test_Smart(QObject *parent = 0);

private slots:
    void DbOpen();
    void Status_validator();
    void Year_validator();
    void Month_validator();
    void Day_validator();
    void Add_func();
};

