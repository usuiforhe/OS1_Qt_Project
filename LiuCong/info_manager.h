#ifndef INFO_MANAGER_H
#define INFO_MANAGER_H
#include "read_meminfo.h"
#include "cpu_stat.h"
#include "read_dic.h"
#include "get_version.h"
#include "get_uptime.h"
#include "get_hostname.h"
class Info_Manager
{
public:
    static Info_Manager* getInstance();
    Info_Manager();
    QString cpu_info(int index);
    QString mem_info();
    vector<Node_Pid> Pics_dir();
    QString get_version();
    QString get_uptime();
    QString get_Hostname();
    ~Info_Manager();
private:
    Cpu_Stat *cpu;
    Read_Meminfo *mem;
    Read_dic *dir;
    Get_version  *version;
    Get_uptime *uptime;
    Get_HostName *hostName;
    static Info_Manager *info_Manager;
};

#endif // INFO_MANAGER_H
