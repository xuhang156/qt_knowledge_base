#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "ButtonClickPopUp.h"
#include <QDebug>

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), _btnClickPopUp(new ButtonClickPopUp())
{
    ui->setupUi(this);
    ui->popUpWidget->installEventFilter(this);
}

MainWindow::~MainWindow() { delete ui; }

bool MainWindow::eventFilter(QObject* watched, QEvent* event)
{
    qDebug() << event->type();
    if (event->type() == QEvent::FocusIn) {
        _btnClickPopUp->hide();
    }
    return QWidget::eventFilter(watched, event);
}

void MainWindow::on_popUpWidget_pressed()
{
    const auto& pos = ui->popUpWidget->rect().bottomLeft();
    const auto& movePos = ui->popUpWidget->mapToGlobal(pos);
    _btnClickPopUp->move(movePos);
    _btnClickPopUp->raise();
    _btnClickPopUp->show();
}
