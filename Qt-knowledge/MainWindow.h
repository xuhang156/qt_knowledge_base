#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ButtonClickPopUp.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

private:
    bool eventFilter(QObject* watched, QEvent* event);

private slots:
    void on_popUpWidget_pressed();

private:
    Ui::MainWindow* ui;
    QSharedPointer<ButtonClickPopUp> _btnClickPopUp;
};
#endif // MAINWINDOW_H
