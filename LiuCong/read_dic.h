#ifndef READ_DIC_H
#define READ_DIC_H
#include "QDir"
#include "QString"
#include "QFile"
#include "vector"
#include "algorithm"
using namespace std;

typedef struct Node_Pid
{
    QString time, pid;
    QString name;
    QString VMsize;
    static int index_s;
    Node_Pid(QString t, QString p, QString n, QString size ) {
        this->time = t;
        this->pid = p;
        this->name = n;
        this->VMsize = size.simplified();
    }
    bool operator <(const Node_Pid& b){
        if(index_s == 1)
            return this->pid < b.pid;
        if(index_s == 2)
            return this->time > b.time;
        else
            return this->VMsize > b.VMsize;
    }

}Node_Pid;
class Read_dic
{
public:
    Read_dic();
    vector<Node_Pid> get_dic_list();
    QStringList list;
    void update_dic();
    void set_Stat(int s);
private:
    int stat;
    QString path;
    QString f;
    vector<Node_Pid> v;
};

#endif // READ_DIC_H
