#include "mainObject.h"

const quint16 UDP_PORT = 10001;

MainObject::MainObject(QObject *parent) :
  QObject(parent)
{
  socket = new QUdpSocket(this);
  socket->bind(QHostAddress::Any, UDP_PORT);
  connect(socket, SIGNAL(readyRead()), this, SLOT(onReadyRead()));
}

MainObject::~MainObject()
{
}


void MainObject::onReadyRead()
{
  qDebug() << "Ready read";
  while (socket->hasPendingDatagrams())
  {
    QByteArray ba(64 * 1024, 0);
    int bytes = socket->readDatagram(ba.data(), ba.length());

    qDebug() << "Datagram of size" << bytes;
  }
}
