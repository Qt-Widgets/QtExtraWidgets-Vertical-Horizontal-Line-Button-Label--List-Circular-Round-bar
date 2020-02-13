#include "QtDemo.h"
#include "ThemeHandler.hpp"

int main(int argc, char* argv[])
{
    //QtDemo* app = new QtDemo(argc, argv);
    QtDemo app(argc, argv);

	initThemes();
    //setAppThemeDark(app);
	//setAppThemeLight(app);
    setAppThemeDark(&app);

    //app->ShowUI();
    app.ShowUI();

    //return app->exec();
    return app.exec();
}
