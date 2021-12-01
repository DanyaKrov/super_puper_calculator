#include "header.h"

bool checking(string str)
{
    if (itc_len(str) == 1 && (itc_find_str(str, "+") != -1 || itc_find_str(str, "-") != -1 || itc_find_str(str, "*") != -1))
        return true;
    if (itc_len(str) == 0)
        return false;
    for (int i = 0; i < itc_len(str); i++)
    {
        if (!(48 <= str[i] && str[i] >= 57))
            return false;
    }
    return true;
}
