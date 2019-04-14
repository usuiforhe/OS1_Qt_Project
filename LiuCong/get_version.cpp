#include "get_version.h"
#include "QDebug"
Get_version::Get_version()
{
    str = "系统版本为：";
}

void Get_version::get_V(){
    QFile file("/proc/version");
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QString temp = file.readAll();
    auto list = temp.split(' ');
    this->data = list[2];
    file.close();
}

QString Get_version::system_version(){
    this->get_V();
    return this->str + this->data;
}
