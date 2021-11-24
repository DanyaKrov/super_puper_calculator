#include "header.h"

bool checking(string str)
{
    if (itc_len(str) == 0)
        return false;
    for (int i = 0; i < itc_len(str); i++)
    {
        if ((str[i] != 46 && str[i] != 44) && !(48 <= str[i] && str[i] >= 57))
            return false;
    }
    return true;
}
