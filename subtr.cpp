#include "header.h"

string subtr(string str1, string str2)
{
    string ans = "";
    bool minus = false;
    if (itc_len(str1) < itc_len(str2)){
        string s = str1;
        str1 = str2;
        str2 = s;
        minus = true;
    }
    str1 = strRev(str1); str2 = normal_str(strRev(str2), itc_len(str1));
    int kol = 0;
        for (int i = 0; i < itc_len(str1); i++){
        if ((str1[i] - kol) < str2[i]){
            ans += toStr(10 - kol + str1[i] - str2[i]);
            kol = 1;

        }
        else{
            ans += toStr(str1[i] - str2[i] - kol);
            kol = 0;
        }
    }
    if (ans == "0-"){
        ans = "0";
        minus = false;
    }
    if (minus)
        return "-" + noZero(strRev(ans));
    else
        return noZero(strRev(ans));
}
