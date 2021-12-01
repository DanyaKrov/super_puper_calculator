#include "header.h"

string noZero(string str){
    int num = 0;
    while(str[num] == 48 && num < itc_len(str))
        num++;
    if (itc_len(str) == num)
        return "0";
    return itc_slice_str(str, num, itc_len(str));
}
