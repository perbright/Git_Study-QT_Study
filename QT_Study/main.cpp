#include "qt_studywindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QT_StudyWindow w;
    w.show();
    return a.exec();
}
