#include "header.h"

string strRev(string str){
    string ans;
    for (int i = itc_len(str) - 1; i >= 0; i--)
        ans += str[i];
    return ans;
}
