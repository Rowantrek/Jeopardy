#include "qtjeopardy.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtJeopardy w;
    w.setWindowState(Qt::WindowMaximized);
    w.show();

    return a.exec();
}
