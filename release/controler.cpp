#include "controler.h"

class Controller : public QObject
{
    Q_OBJECT
    QString m_test;

public:
    explicit Controller(QObject *parent = 0);

    Q_PROPERTY(QString test READ test WRITE setTest NOTIFY testChanged)



signals:

    void testChanged(QString arg);

public slots:


};
