#include "integnum.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    IntegNum w;
    w.show();

    return a.exec();
}
