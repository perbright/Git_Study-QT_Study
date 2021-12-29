/********************************************************************************
** Form generated from reading UI file 'qt_studywindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_STUDYWINDOW_H
#define UI_QT_STUDYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QT_StudyWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QWidget *horizontalWidget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QButtonGroup *buttonGroup;
    QButtonGroup *buttonGroup_2;

    void setupUi(QMainWindow *QT_StudyWindow)
    {
        if (QT_StudyWindow->objectName().isEmpty())
            QT_StudyWindow->setObjectName(QString::fromUtf8("QT_StudyWindow"));
        QT_StudyWindow->resize(800, 600);
        centralwidget = new QWidget(QT_StudyWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 230, 211, 111));
        pushButton->setStyleSheet(QString::fromUtf8("background-image: url(:/image/image1.jpg);"));
        radioButton = new QRadioButton(centralwidget);
        buttonGroup = new QButtonGroup(QT_StudyWindow);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(radioButton);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(50, 410, 89, 16));
        radioButton_2 = new QRadioButton(centralwidget);
        buttonGroup->addButton(radioButton_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(150, 410, 89, 16));
        horizontalWidget = new QWidget(centralwidget);
        horizontalWidget->setObjectName(QString::fromUtf8("horizontalWidget"));
        horizontalWidget->setGeometry(QRect(300, 390, 227, 80));
        horizontalLayout = new QHBoxLayout(horizontalWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        checkBox = new QCheckBox(horizontalWidget);
        buttonGroup_2 = new QButtonGroup(QT_StudyWindow);
        buttonGroup_2->setObjectName(QString::fromUtf8("buttonGroup_2"));
        buttonGroup_2->addButton(checkBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(checkBox);

        checkBox_2 = new QCheckBox(horizontalWidget);
        buttonGroup_2->addButton(checkBox_2);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        horizontalLayout->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(horizontalWidget);
        buttonGroup_2->addButton(checkBox_3);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        horizontalLayout->addWidget(checkBox_3);

        QT_StudyWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(QT_StudyWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        QT_StudyWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(QT_StudyWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        QT_StudyWindow->setStatusBar(statusbar);

        retranslateUi(QT_StudyWindow);

        QMetaObject::connectSlotsByName(QT_StudyWindow);
    } // setupUi

    void retranslateUi(QMainWindow *QT_StudyWindow)
    {
        QT_StudyWindow->setWindowTitle(QCoreApplication::translate("QT_StudyWindow", "QT_StudyWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("QT_StudyWindow", "PushButton", nullptr));
        radioButton->setText(QCoreApplication::translate("QT_StudyWindow", "\347\224\267", nullptr));
        radioButton_2->setText(QCoreApplication::translate("QT_StudyWindow", "\345\245\263", nullptr));
        checkBox->setText(QCoreApplication::translate("QT_StudyWindow", "\350\277\220\345\212\250", nullptr));
        checkBox_2->setText(QCoreApplication::translate("QT_StudyWindow", "\347\224\265\345\275\261", nullptr));
        checkBox_3->setText(QCoreApplication::translate("QT_StudyWindow", "\351\237\263\344\271\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QT_StudyWindow: public Ui_QT_StudyWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_STUDYWINDOW_H
