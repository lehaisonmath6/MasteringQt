#include "Sysinfo.h"
#include <QtGlobal>
#ifdef Q_OS_LINUX
#include "sysinforlinuximpl.h"
#endif
SysInfo::SysInfo()
{

}
SysInfo &SysInfo::instance()
{
#ifdef Q_OS_LINUX
    static SysInforLinuxImpl singleton;
#endif
    return  singleton;
}

SysInfo::~SysInfo()
{
}
