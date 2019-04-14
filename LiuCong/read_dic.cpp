#include "read_dic.h"
#include "QDebug"
int Node_Pid::index_s = 1;

Read_dic::Read_dic()
{
    this->set_Stat(1);
    path = "/proc/";
    f = "/stat";
}


void Read_dic::set_Stat(int s){
    this->stat = s;
    Node_Pid::index_s = s;
}

void Read_dic::update_dic(){
    this->list.clear();
    this->v.clear();
    QDir dir("/proc/");
    dir.setFilter(QDir::NoDotAndDotDot | QDir::AllDirs);// 过滤 ' . ' 和 '..'
    this->list = dir.entryList();
}

vector<Node_Pid> Read_dic::get_dic_list(){
    this->update_dic();
    int i=0;
    while(i < list.size()){
//        qDebug() << (list[i]).toInt() ;
        if((list[i]).toInt() != 0) {// 如果不能转换成非0正整数，则说明非全数字，说明不是PID文件夹
            // i = 0 -> pid
            // i = 21 -> time
            // i = 1 -> name
            QFile file(path + list[i] + f);
            QFile file2(path + list[i] + "/status");
    //        qDebug() << path + list[i] + "/status" ;
            file.open(QIODevice::ReadOnly | QIODevice::Text);
            file2.open(QIODevice::ReadOnly | QIODevice::Text) ;
            QString s = file.readAll();
            QStringList li = s.split(' ');

            QString s2 = file2.readAll();
            QStringList li2 = s2.split('\n');
            if(li2.size() < 17 || (li2[17].split(':'))[0] != "VmSize" ){// 获取进程当前占用虚拟内存
                i++;
                continue;
            }
            auto l3 = li2[17].split(':');
            auto s3 = l3[1];

            Node_Pid node(li[21], li[0], li[1], s3);
            this->v.push_back(node);
            file.close();
            file2.close();
        }
        i++;
    }

    std::sort(v.begin(), v.end());
    return this->v;
}
