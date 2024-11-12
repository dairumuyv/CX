#include "CX.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CX w;
    w.show();
    return a.exec();
}
