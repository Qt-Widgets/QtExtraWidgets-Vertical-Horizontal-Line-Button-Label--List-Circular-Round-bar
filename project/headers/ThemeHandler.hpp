#ifndef _THEME_HANDLER
#define _THEME_HANDLER

#include <QWidget>
#include <QLabel>
#include <QMovie>
#include <QPalette>
#include <QFont>
#include <QFontDatabase>

typedef enum ThemeSetting
{
    Light,
    Dark,
	Silver
}ThemeSetting;

void initThemes();
void adjustBackground(QWidget* ptr);
void setAppThemeDark(QApplication *ptr);
void setAppThemeLight(QApplication* ptr);
void setAppThemeSilver(QApplication* ptr);
QPalette currentThemePalette();
QString currentFont();

#endif
