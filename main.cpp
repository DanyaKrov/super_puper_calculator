#include "header.h"


int main()
{
    setlocale(LC_ALL,"Russian");
    bool checker = true;
    string str1, str2, str3;
    while (checker){
        cout <<"¬ведите 2 числа и знак дл€ вычислени€" << endl;
        cin >>str1;
        cin >>str2;
        cin >>str3;
        checker = ((checking(str1)) && (checking(str2)) && (checking(str3)));
    }
    cout <<Operator(noZero(str1), noZero(str2), str3);
}
