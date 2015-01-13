#ifndef NETWORKHELER_H
#define NETWORKHELER_H

#include <QObject>

class NetworkHeler : public QObject
{
    Q_OBJECT
public:
    explicit NetworkHeler(QObject *parent = 0);
    ~NetworkHeler();

    Q_INVOKABLE bool checkHost(const QString& p_hostName);
signals:
    void hostReached(const QString& p_hostName);
    void hostNotFound(const QString& p_hostName);

public slots:
};

#endif // NETWORKHELER_H
