#include "qt_studywindow.h"
#include "ui_qt_studywindow.h"
#include <iostream>
using namespace std;

QT_StudyWindow::QT_StudyWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::QT_StudyWindow)
{
    ui->setupUi(this);
}

QT_StudyWindow::~QT_StudyWindow()
{
    delete ui;
}


void QT_StudyWindow::on_pushButton_clicked()
{
    cout<<"123"<<endl;
}
