#include "mainObject.h"
#include <QCoreApplication>

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  MainObject o;

  return a.exec();
}
