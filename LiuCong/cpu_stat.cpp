#include "cpu_stat.h"
// 读取CPU信息  /proc/stat
Cpu_Stat::Cpu_Stat()
{
    this->cpu = "CPU";
    this->use_ = "的利用率为：";
}

void Cpu_Stat::update_info(){
    QFile file("/proc/stat");
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QString str = file.readAll();
    this->list = str.split('\n');
    file.close();
}

QString Cpu_Stat::get_Cpu(int index){// 获取各个CPU总利用率
    QString str = this->list[index];
    QStringList info_list = str.split(' ');
    double user = info_list[2].toDouble(), nice = info_list[3].toDouble(), system = info_list[4].toDouble(), idle = info_list[5].toDouble();
    double use = (user + nice + system) / (user + nice + system + idle) * 100.0;
    QString out;
    out.setNum(use);
    out.append('%');
    QString num;
    if(index == 0)
        num.append("总");
    else
        num.setNum(index);
    return this->cpu + num + this->use_ + out;
}
