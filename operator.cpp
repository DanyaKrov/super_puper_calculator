#include "header.h"

string Operator(string str1, string str2, string op){
    if ((itc_find_str("+", op) != -1 && itc_len(op) == 1) && itc_len(str1) < 20 && itc_len(str2) < 20){
        return toStr(ToInt(str1) + ToInt(str2));
    }
    else if ((itc_find_str("-", op) != -1 && itc_len(op) == 1) && itc_len(str1) < 20 && itc_len(str2) < 20){
        return toStr(ToInt(str1) - ToInt(str2));
    }
    else if ((itc_find_str("*", op) != -1 && itc_len(op) == 1) && itc_len(str1) < 10 && itc_len(str2) < 10){
        return toStr(ToInt(str1) * ToInt(str2));
    }
    else
        return "Неправильно введён оператор";
}
