#include "header.h"

vector<int> toVec(string str)
{
    vector<int> vec(itc_len(str));
    for (int i = 0; i < itc_len(str); i++)
    {
        push_back(vec, ToInt(str[i]));
    }
    return vec;
}
