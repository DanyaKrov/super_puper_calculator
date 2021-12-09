#include "header.h"

string Operator(string str1, string str2, string op){
    if (itc_find_str(str1, "+") == 0)
        str1 = itc_slice_str(str1, 1, itc_len(str1));
    if (itc_find_str(str2, "+") == 0)
        str2 = itc_slice_str(str2, 1, itc_len(str2));
    if (neg(str1, str2, op) != "+"){
        if (neg(str1, str2, op) != "-0")
            return neg(str1, str2, op);
        else
            return "0";
    }
    else if (itc_find_str(op, "+") != -1)
        return noZero(sum(noZero(str1), noZero(str2)));
    else if (itc_find_str(op, "-") != -1)
        return noZero(subtr(noZero(str1), noZero(str2)));
    else
        return "Неправильно введён оператор";
}
