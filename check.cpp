#include "header.h"

bool checking_oper(string str)
{
    if (itc_len(str) == 1 && (itc_find_str(str, "+") != -1 || itc_find_str(str, "-") != -1 || itc_find_str(str, "*") != -1))
        return false;
    else
        return true;
}
bool checking(string str)
{
    if (itc_len(str) == 0)
        return true;
    for (int i = 0; i < itc_len(str); i++)
    {
        if ((48 > str[i] || str[i] > 57) && str[i] != '-' && str[i] != '+')
            return true;
    }
    return false;
}
