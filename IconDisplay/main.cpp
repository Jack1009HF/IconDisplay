#include "IconDisplay.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    IconDisplay w;
    w.show();
    return a.exec();
}
