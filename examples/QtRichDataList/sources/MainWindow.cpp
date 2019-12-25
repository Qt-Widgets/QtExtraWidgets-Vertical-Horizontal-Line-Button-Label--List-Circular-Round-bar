#include <QDir>
#include <QPixmap>
#include "MainWindow.h"

MainWindow::MainWindow(QWidget* parent)
	: QMainWindow(parent), biglist(true), smalllist(false)
{
	setMinimumHeight(768);
	setMinimumWidth(1024);

	setCentralWidget(&splitter);

	splitter.setOrientation(Qt::Vertical);

	splitter.addWidget(&biglist);
	splitter.addWidget(&smalllist);

	QString current_path = QDir::currentPath();

	QPixmap pix;

	if (QFile::exists(current_path + "/Subrato_Formal.jpg"))
	{
		pix.load(current_path + "/Subrato_Formal.jpg");
	}

	QListWidgetItem* data_item1_big = new QListWidgetItem(&biglist);
	data_item1_big->setData(Qt::DisplayRole, QVariant("First"));
	data_item1_big->setData(Qt::UserRole, QVariant("Item No. 1"));
	data_item1_big->setData(Qt::UserRole + 1, QVariant("1"));

	if (!pix.isNull())
	{
		data_item1_big->setData(Qt::DecorationRole, QVariant(pix));
	}

	QListWidgetItem* data_item2_big = new QListWidgetItem(&biglist);
	data_item2_big->setData(Qt::DisplayRole, QVariant("Second"));
	data_item2_big->setData(Qt::UserRole, QVariant("Item No. 2"));
	data_item2_big->setData(Qt::UserRole + 1, QVariant("2"));
	data_item2_big->setData(Qt::UserRole + 2, QVariant(true));

	QListWidgetItem* data_item3_big = new QListWidgetItem(&biglist);
	data_item3_big->setData(Qt::DisplayRole, QVariant("Third"));
	data_item3_big->setData(Qt::UserRole, QVariant("Item No. 3"));
	data_item3_big->setData(Qt::UserRole + 1, QVariant("3"));

	QListWidgetItem* data_item4_big = new QListWidgetItem(&biglist);
	data_item4_big->setData(Qt::DisplayRole, QVariant("Fourth"));
	data_item4_big->setData(Qt::UserRole, QVariant("Item No. 4"));
	data_item4_big->setData(Qt::UserRole + 1, QVariant("4"));

	//////////////////////////////////////////////////////////////

	QListWidgetItem* data_item1_small = new QListWidgetItem(&smalllist);
	data_item1_small->setData(Qt::DisplayRole, QVariant("First"));
	data_item1_small->setData(Qt::UserRole, QVariant("Item No. 1"));
	data_item1_small->setData(Qt::UserRole + 1, QVariant("1"));

	QListWidgetItem* data_item2_small = new QListWidgetItem(&smalllist);
	data_item2_small->setData(Qt::DisplayRole, QVariant("Second"));
	data_item2_small->setData(Qt::UserRole, QVariant("Item No. 2"));
	data_item2_small->setData(Qt::UserRole + 1, QVariant("2"));
	data_item2_small->setData(Qt::UserRole + 2, QVariant(true));

	QListWidgetItem* data_item3_small = new QListWidgetItem(&smalllist);
	data_item3_small->setData(Qt::DisplayRole, QVariant("Third"));
	data_item3_small->setData(Qt::UserRole, QVariant("Item No. 3"));
	data_item3_small->setData(Qt::UserRole + 1, QVariant("3"));

	if (!pix.isNull())
	{
		data_item3_small->setData(Qt::DecorationRole, QVariant(pix));
	}

	QListWidgetItem* data_item4_small = new QListWidgetItem(&smalllist);
	data_item4_small->setData(Qt::DisplayRole, QVariant("Fourth"));
	data_item4_small->setData(Qt::UserRole, QVariant("Item No. 4"));
	data_item4_small->setData(Qt::UserRole + 1, QVariant("4"));
}

MainWindow::~MainWindow()
{
}