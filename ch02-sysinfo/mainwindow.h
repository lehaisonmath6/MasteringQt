#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "cpuwidget.h"
#include "memorywidget.h"
#include <QHBoxLayout>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    CpuWidget* mCpuWidget;
    MemoryWidget* mMemoryWidget;
    QHBoxLayout* hlayout;
};

#endif // MAINWINDOW_H
