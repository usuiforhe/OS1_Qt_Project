#include "get_uptime.h"

Get_uptime::Get_uptime()
{
    this->str = "开机时间为：";
}

void Get_uptime::update_time(){
    QFile file("/proc/uptime");
    file.open(QIODevice::ReadOnly | QIODevice::Text);
    this->data = file.readAll();
    this->data = (this->data.split(' '))[0];
    file.close();
}

void Get_uptime::format_time(){
    int upTime = this->data.toDouble(); // 单位为秒

    int day = upTime/(24*60*60); // 天
    upTime %=  (24*60*60);
    int hour = upTime / (60*60); // 小时
    upTime %= (60*60);
    int minute = upTime / 60; // 分钟
    upTime %= minute * 60;
    int second = upTime; // 秒

    this->data = QString::number(day) + "天" + QString::number(hour) + "小时" + QString::number(minute) + "分钟" + QString::number(second) + "秒";

}

QString Get_uptime::get_Uptime(){
    this->update_time();// 更新
    this->format_time();// 格式化
    return this->str + this->data;
}
