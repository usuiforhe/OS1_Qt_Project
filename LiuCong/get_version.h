#ifndef GET_VERSION_H
#define GET_VERSION_H
#include "QFile"
#include "QString"

class Get_version
{
public:
    Get_version();
    QString system_version();
    void get_V();
private:
    QString str;
    QString data;
};

#endif // GET_VERSION_H
