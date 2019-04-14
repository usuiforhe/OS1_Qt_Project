#include "read_meminfo.h"
// 读取文件 /proc/meminfo
Read_Meminfo::Read_Meminfo()
{
    this->mem = QString("内存使用率为：");
}

void Read_Meminfo::upate_mem(){
    QFile file("/proc/meminfo");
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    QString str = file.readAll();
    this->list = str.split('\n');
    file.close();
}

double Read_Meminfo::my_split(QString str){
    QString temp = (str.split(':'))[1].simplified();
    temp.chop(2);//去除最后MB两个字符
    return temp.toDouble();
}

QString Read_Meminfo::Mem_Use(){
    this->upate_mem();// 每次都要更新一下读取的值
    QString total =this->list[0];
    QString free_m = this->list[1];
    double total_mem = my_split(total);
    double free_mem = my_split(free_m);
    QString out;
    out.setNum(free_mem / total_mem * 100);
    out.append('%');
    return this->mem + out;
}
