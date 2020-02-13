#include "QtDemo.h"

QtDemo::QtDemo(int argc, char* argv[]) : QApplication(argc, argv)
{

}

QtDemo::~QtDemo()
{

}

void QtDemo::ShowUI()
{
	window.show();
}