#include "IndicatorBar.hpp"
#include "ThemeHandler.hpp"

IndicatorBar::IndicatorBar()
{
    movie.setFileName(":images/barprogress.gif");
    setMovie(&movie);
    setVisible(false);
}

void IndicatorBar::Start()
{
    setVisible(true);
    show();
    movie.start();}

void IndicatorBar::Stop()
{
    setVisible(false);
    hide();
    movie.stop();
}
