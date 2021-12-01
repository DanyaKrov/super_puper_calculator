#include "header.h"

string toStr(int num){
    string res = "", result = ""; int number;
    if (num == 0){
        return "0";
    }
    while(num > 0){
        number = num % 10;
        res += '0' + number;
        num = num / 10;
    }
    for(int i = itc_len(res) - 1; i > -1; i--){
        result += res[i];
    }
    return result;
}
