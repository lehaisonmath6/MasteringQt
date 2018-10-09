#ifndef MEMORYWIDGET_H
#define MEMORYWIDGET_H
#include "sysinfowidget.h"
#include <QWidget>
#include <QtCharts/QLineSeries>

class MemoryWidget : public SysInfoWidget
{
    Q_OBJECT
public:
    MemoryWidget(QWidget* parent = nullptr);

    // SysInfoWidget interface
protected slots:
    void updateSeries();
private:
    QtCharts::QLineSeries* mSeries;
    qint64 mPointPositionX;
};

#endif // MEMORYWIDGET_H
