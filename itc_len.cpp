#include "header.h"

long long itc_len(string str){ // length of string
    int kol = 0;
    while (str[kol] != '\0')
    {
        kol++;
    }
    return kol;
}
