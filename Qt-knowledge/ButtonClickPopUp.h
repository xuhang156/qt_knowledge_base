#ifndef BUTTONCLICKPOPUP_H
#define BUTTONCLICKPOPUP_H

#include <QWidget>

namespace Ui {
class ButtonClickPopUp;
}

///
/// \brief The ButtonClickPopUp class
/// 主要实现点击按钮，弹出自定义的界面
/// 步骤：
/// 1. 对所在按钮进行注册事件：ui->popUpWidget->installEventFilter(this);
/// 2. 按钮监听事件，点击时显示界面,注意转换坐标
/// 3. 按钮所在界面监听force in事件
///
class ButtonClickPopUp : public QWidget
{
    Q_OBJECT

public:
    explicit ButtonClickPopUp(QWidget* parent = nullptr);
    ~ButtonClickPopUp();

private:
    Ui::ButtonClickPopUp* ui;
};

#endif // BUTTONCLICKPOPUP_H
