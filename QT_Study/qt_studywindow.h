#ifndef QT_STUDYWINDOW_H
#define QT_STUDYWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class QT_StudyWindow; }
QT_END_NAMESPACE

class QT_StudyWindow : public QMainWindow
{
    Q_OBJECT

public:
    QT_StudyWindow(QWidget *parent = nullptr);
    ~QT_StudyWindow();

private:
    Ui::QT_StudyWindow *ui;
};
#endif // QT_STUDYWINDOW_H
