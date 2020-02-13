#include "CentralWidget.hpp"
#include "ThemeHandler.hpp"

CentralWidget::CentralWidget(QWidget *parent) : QWidget(parent)
{
    setLayout(&_Layout);
    _Layout.setMargin(0);
    _Layout.setSpacing(0);
}

CentralWidget::~CentralWidget()
{

}

void CentralWidget::addWidget(QWidget *widget)
{
    _Layout.addWidget(widget);
}
