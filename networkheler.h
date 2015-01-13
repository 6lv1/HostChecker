#ifndef NETWORKHELER_H
#define NETWORKHELER_H

#include <QObject>

class NetworkHeler : public QObject
{
    Q_OBJECT
public:
    explicit NetworkHeler(QObject *parent = 0);
    ~NetworkHeler();

signals:

public slots:
};

#endif // NETWORKHELER_H
