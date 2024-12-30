#include "dragdropevent.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DragDropEvent w;
    w.show();
    return a.exec();
}
