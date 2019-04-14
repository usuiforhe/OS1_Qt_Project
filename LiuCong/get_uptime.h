#ifndef GET_UPTIME_H
#define GET_UPTIME_H

#include "QFile"
#include "QString"
class Get_uptime
{
public:
    Get_uptime();
    void update_time();
    QString get_Uptime();
    void format_time();
private:
    QString str;
    QString data;
};

#endif // GET_UPTIME_H
