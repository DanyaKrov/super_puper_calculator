#include "header.h"

long double ToInt(string str){
    long double num = 0, pos = 0, kol = 0;
    for(int i = 0; str[i] != '.'; i++){
        if (str[i] >= '0' && str[i] <= '9'){
            num = num * 10 + (str[i] - '0');
        }
    }
    for(int i = 0; str[i] != '.'; i++){
        pos++;
        if (str[i] >= '0' && str[i] <= '9'){
            num = num * 10 + (str[i] - '0');
        }
    }
    for(int i = pos; i < itc_len(str); i++){
        num += str[i] / itc_pow(kol, 10);
        kol++;
    }
    return num;
}
