#include "QtDemo.h"
#include "ThemeHandler.hpp"

int main(int argc, char* argv[])
{
	QtDemo* app = new QtDemo(argc, argv);

	initThemes();
	setAppThemeDark(app);
	//setAppThemeLight(app);

	app->ShowUI();

	return app->exec();
}
