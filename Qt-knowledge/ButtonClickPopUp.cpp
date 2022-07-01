#include "ButtonClickPopUp.h"
#include "ui_ButtonClickPopUp.h"

ButtonClickPopUp::ButtonClickPopUp(QWidget* parent) : QWidget(parent), ui(new Ui::ButtonClickPopUp)
{
    ui->setupUi(this);
    setWindowFlags(Qt::CustomizeWindowHint);
}

ButtonClickPopUp::~ButtonClickPopUp() { delete ui; }
