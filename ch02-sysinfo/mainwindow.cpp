#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Sysinfo.h"
#include <QLayout>
#include <QHBoxLayout>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    SysInfo::instance().init();

    hlayout = new QHBoxLayout();
    mCpuWidget = new CpuWidget();
    mMemoryWidget = new MemoryWidget();
    hlayout->addWidget(mCpuWidget);
    hlayout->addWidget(mMemoryWidget);
    QWidget *centrelwidg = new QWidget();
    centrelwidg->setLayout(hlayout);
    setCentralWidget(centrelwidg);
//    hl/*ayout->addWidget(&mCpuWidget);
//    hlayout->addWidget(&mMemoryWidget);*/
//    MainWindow::centralWidget()->layout()->addWidget(&mCpuWidget);
//    MainWindow::centralWidget()->layout()->addWidget(&mMemoryWidget);
//    MainWindow::setCentralWidget(&mMemoryWidget);

//    MainWindow::layout()->addWidget(&mMemoryWidget);
//    MainWindow::layout()->addWidget(&mCpuWidget);
//    ui->centralWidget->layout()->addWidget(mCpuWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete mCpuWidget;
    delete mMemoryWidget;
    delete hlayout;
}
