#ifndef READ_MEMINFO_H
#define READ_MEMINFO_H
#include "QString"
#include "QFile"

class Read_Meminfo
{
public:
    Read_Meminfo();
    QString Mem_Use();
    void upate_mem();
    double my_split(QString str);
private:
    QString mem;
    QStringList list;
};

#endif // READ_MEMINFO_H
