#include "phonenumber.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PhoneNumber w;
    w.show();
    return a.exec();
}
