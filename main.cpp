#include "header.h"
#include <stdlib.h>


int main()
{
    setlocale(LC_ALL,"Russian");
    system("Color 2");
    music();
    bool checker, statement = true;
    string str1, str2, str3;
    while (statement){
        checker = true;
        while (checker){
            cout <<"������� 2 ����� � ���� ��� ���������� ��� 'end' ��� ���������� ������ ���������" << endl;
            cin >>str1;
            cin >>str2;
            cin >>str3;
            if (str1 == "end" || str2 == "end" || str3 == "end"){
                statement = false;
                checker = false;
                break;
            }
            else
                checker = ((checking(str1)) || (checking(str2)) || (checking_oper(str3)));
       }
       if (statement)
           cout <<Operator(noZero(str1), noZero(str2), str3) <<endl;
    }
    return 0;
}
