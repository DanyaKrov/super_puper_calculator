#include "header.h"

long long itc_len(string str){ // length of string
    int kol = 0;
    while (str[kol] != '\0')
    {
        kol++;
    }
    return kol;
}
long long ToInt(string str){
    long long num = 0;
    for(int i = 0; i < itc_len(str); i++){
        if (str[i] >= '0' && str[i] <= '9'){
            num = num * 10 + (str[i] - '0');
        }
    }
    return num;
}
