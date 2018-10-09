#ifndef SYSINFORLINUXIMPL_H
#define SYSINFORLINUXIMPL_H
#include "Sysinfo.h"
#include <QtGlobal>
#include <QVector>

class SysInforLinuxImpl : public SysInfo
{
public:
    SysInforLinuxImpl();
    ~SysInforLinuxImpl();

    // SysInfo interface
public:
    void init();
    double cpuLoadAverage();
    double memoryUsed();
private:
    QVector<qulonglong> cpuRawData();
    QVector<qulonglong> mCpuLoadLastValue;
};

#endif // SYSINFORLINUXIMPL_H
