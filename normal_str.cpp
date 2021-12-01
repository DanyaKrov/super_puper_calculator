#include "header.h"

string normal_str(string str, int len){
    for (int i = itc_len(str); i <= len; i++)
        str += "0";
    return str;
}
