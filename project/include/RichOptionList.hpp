#ifndef _RICH_OPTION_LIST
#define _RICH_OPTION_LIST

#include <QtCore>
#include <QWidget>
#include <QPainter>
#include <QPixmap>
#include <QLabel>
#include <QListWidget>
#include <QHBoxLayout>
#include <QLineEdit>

class RichOptionListItemDelegate : public QAbstractItemDelegate
{
public:
	RichOptionListItemDelegate(bool large = true, QObject *parent = 0);
    void paint( QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex & index) const;
    QSize sizeHint ( const QStyleOptionViewItem & option, const QModelIndex & index ) const;
    virtual ~RichOptionListItemDelegate();
private:
    bool detailedRendering;
    int  rowHeight;
};

class RichOptionList : public QListWidget
{
    Q_OBJECT
public:
	RichOptionList(bool large);
    virtual ~RichOptionList();
};

#endif
