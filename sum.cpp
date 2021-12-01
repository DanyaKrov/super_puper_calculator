#include "header.h"

string sum(string str1, string str2)
{
    if (itc_len(str1) < itc_len(str2)){
        string s = str1;
        str1 = str2;
        str2 = s;
    }
    str1 = strRev(str1); str2 = normal_str(strRev(str2), itc_len(str1));
    string ans = "";
    unsigned char kol = 48;
    for (int i = 0; i < itc_len(str1); i++){
        ans += toStr((ToInt(str2[i]) + ToInt(str1[i]) + ToInt(kol)) % 10);
        kol = ((ToInt(str1[i]) + ToInt(str2[i])) / 10) + 48;
    }
    if (kol > 48)
        ans += kol;
    return strRev(ans);
}
