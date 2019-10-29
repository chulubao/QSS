#include <QApplication>
#include "toptilewidget.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TopTileWidget w;
    w.show();
    
    return a.exec();
}
