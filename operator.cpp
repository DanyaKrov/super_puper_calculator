#include "header.h"

string Operator(string str1, string str2, string op){
    if (neg(str1, str2, op) != "+")
        return neg(str1, str2, op);
    else if (itc_find_str(op, "+") != -1)
        return noZero(sum(str1, str2));
    else if (itc_find_str(op, "-") != -1)
        return noZero(subtr(str1, str2));
    else
        return "Неправильно введён оператор";
}
