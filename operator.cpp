#include "header.h"

string Operator(string str1, string str2, string op){
    int conf = 0;
    if (itc_find_str(str1, "-") != -1){
        str1 = itc_slice_str(str1, 1, itc_len(str1));
        conf += 1;
    }
    if (itc_find_str(str2, "-") != -1){
        str2 = itc_slice_str(str2, 1, itc_len(str2));
        conf += 1;
    }
    if (itc_find_str(op, "+") != -1){
        if (conf == 2)
            return "-" + sum(str1, str2);
        if (conf == 1)
            return subtr(str1, str2);
        return sum(str1, str2);
    }
    else if (itc_find_str(op, "-") != -1)
        return noZero(subtr(str1, str2));
    else
        return "Неправильно введён оператор";
}
