#include "ActiveLabel.hpp"
#include "ThemeHandler.hpp"

ActiveLabel::ActiveLabel(const QString& text, QWidget* parent)
    : QLabel(parent)
{
    setText(text);
}

ActiveLabel::~ActiveLabel()
{
}

void ActiveLabel::mousePressEvent(QMouseEvent* event)
{
    emit clicked();
}
