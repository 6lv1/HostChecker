#include "networkheler.h"
#include <QTcpSocket>
#include <QDebug>


NetworkHeler::NetworkHeler(QObject *parent) : QObject(parent)
{

}

NetworkHeler::~NetworkHeler()
{

}

bool NetworkHeler::checkHost(const QString &p_hostName)
{
    QTcpSocket l_tcpSocket;
    l_tcpSocket.connectToHost(p_hostName, 80, QIODevice::ReadOnly);

    return l_tcpSocket.waitForConnected(10000);
}

