#include "VectorEditor.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VectorEditor w;
    w.show();
    return a.exec();
}
