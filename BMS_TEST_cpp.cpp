#include "QtWidgetsApplication1.h"
#include "ui_QtWidgetsApplication1.h"

QtWidgetsApplication1::QtWidgetsApplication1(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

QtWidgetsApplication1::~QtWidgetsApplication1()
{}

void QtWidgetsApplication1::OnClickedBtnPush()
{
    QMessageBox msgBox;
    msgBox.setText("setText");
    msgBox.exec();
}