#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets>
#include <QMainWindow>
#include <QSplitter>
#include "RichDataList.hpp"

class MainWindow : public QMainWindow
{
	Q_OBJECT
public:
	MainWindow(QWidget* parent = 0);
	~MainWindow();
private:
	QSplitter splitter;
	RichDataList biglist;
	RichDataList smalllist;
};

#endif