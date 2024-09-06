#include "memowidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MemoWidget w;
    w.show();
    return a.exec();
}
