#ifndef GET_HOSTNAME_H
#define GET_HOSTNAME_H
#include "QString"
#include "QFile"

class Get_HostName
{
public:
    Get_HostName();
    void Get_Name();
    QString Host_Name();
private:
    QString str;
    QString Name;
};

#endif // GET_HOSTNAME_H
