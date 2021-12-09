#include "header.h"
string neg(string str1, string str2, string oper)
{
   if (itc_find_str(str1, "-") == -1 && itc_find_str(str2, "-") == -1){
       return "+";
   }
   else if (itc_find_str(str1, "-") != -1 && itc_find_str(str2, "-") == -1){
        if (oper == "+")
            return noZero(subtr(noZero(str2), noZero(itc_slice_str(str1, 1, itc_len(str1)))));
        else
            return "-" + noZero(sum(noZero(itc_slice_str(str1, 1, itc_len(str1))), noZero(str2)));
   }
   else if (itc_find_str(str2, "-") != -1 && itc_find_str(str1, "-") == -1){
        if (oper == "+")
            return noZero(subtr(noZero(str1), noZero(itc_slice_str(str2, 1, itc_len(str2)))));
        else
            return "-" + noZero(sum(noZero(itc_slice_str(str2, 1, itc_len(str2))), noZero(str2)));
   }
   else{
        if (oper == "-")
            return noZero(subtr(noZero(itc_slice_str(str2, 1, itc_len(str2))), noZero(itc_slice_str(str1, 1, itc_len(str1)))));
        else
            return "-" + noZero(sum(noZero(itc_slice_str(str1, 1, itc_len(str1))), noZero(itc_slice_str(str2, 1, itc_len(str2)))));
   }
}
