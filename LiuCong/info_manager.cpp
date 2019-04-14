#include "info_manager.h"
Info_Manager* Info_Manager::info_Manager = NULL;
//  管理获取的各个信息的，从自定义类中定义的接口获取信息
Info_Manager::Info_Manager()
{
    this->hostName = new Get_HostName();
    this->cpu = new Cpu_Stat();
    this->mem = new Read_Meminfo();
    this->dir = new Read_dic();
    this->version = new Get_version();
    this->uptime = new Get_uptime();
}

Info_Manager*  Info_Manager::getInstance(){
    if(info_Manager == NULL){
        info_Manager = new Info_Manager();
    }
    return info_Manager;
}

QString Info_Manager::cpu_info(int index){
    if(index == 0){// 只有当index 才重新读文件
        cpu->update_info();
    }
    return cpu->get_Cpu(index);
}

QString Info_Manager::mem_info(){
    return this->mem->Mem_Use();
}

vector<Node_Pid> Info_Manager::Pics_dir(){
    return this->dir->get_dic_list();
}

QString Info_Manager::get_version(){
    return this->version->system_version();
}

QString Info_Manager::get_uptime(){
    return this->uptime->get_Uptime();
}

QString Info_Manager::get_Hostname(){
    return this->hostName->Host_Name();
}

Info_Manager::~Info_Manager(){
    delete this->cpu;
    delete this->mem;
    delete this->dir;
    delete this->version;
    delete this->uptime;
    delete this->hostName;
}
