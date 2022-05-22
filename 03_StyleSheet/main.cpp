#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //a.setStyleSheet();

    Widget w;
    w.show();

    test();

    return a.exec();
}
