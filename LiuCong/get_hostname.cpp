#include "get_hostname.h"
#include "QDebug"
Get_HostName::Get_HostName()
{
    this->str = "主机名为：";
}

void Get_HostName::Get_Name(){
    QFile file("/proc/sys/kernel/hostname");
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    this->Name = file.readAll();
    file.close();
}

QString Get_HostName::Host_Name(){
    this->Get_Name();
    return this->str + this->Name;
}
