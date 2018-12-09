#include <QApplication>
#include "chess.h"
Chess *sah;
int main(int argc, char *argv[])
{
     QApplication a(argc, argv);
     sah=  new Chess();
     sah->show();

    return a.exec();
}
