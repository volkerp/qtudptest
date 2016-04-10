#ifndef MAINOBJECT_H
#define MAINOBJECT_H

#include <QtCore>
#include <QtNetwork>

class MainObject : public QObject
{
  Q_OBJECT

public:
  explicit MainObject(QObject *parent = 0);
  ~MainObject();

private slots:
  void onReadyRead();

private:
  QUdpSocket* socket;
};

#endif // MAINOBJECT_H
