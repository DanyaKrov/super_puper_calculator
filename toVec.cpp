#include "header.h"

vector<int> toVec(string str)
{
    vector<int> vec;
    for (int i = 0; i < itc_len(str); i++)
    {
        vec.push_back(ToInt(str[i]));
    }
    return vec;
}
