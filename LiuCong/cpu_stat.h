#ifndef CPU_STAT_H
#define CPU_STAT_H
#include "QProcess"
#include "QTextStream"
#include "QFile"
class Cpu_Stat
{
public:
    Cpu_Stat();
    QString get_Cpu(int index); // index 为cpu序号，index为0 则是总cpu 为1则是cpu0 为2则是cpu1
    void update_info();// 鉴于每秒都要更新所以要update一下，每次update都是重新读取文件
private:
    QStringList list;
    QString cpu;
    QString use_;

};

#endif // CPU_STAT_H
