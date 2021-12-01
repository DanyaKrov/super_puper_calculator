#include "header.h"

string itc_slice_str(string str, int start, int end){
    if (end < start)
        return str;
    else{
            string answer = "";
            if (end >= itc_len(str))
                end = itc_len(str) - 1;
            for (int imp = start; imp < end + 1; imp++)
                answer += str[imp];
            return answer;
    }
}
