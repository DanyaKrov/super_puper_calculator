#include "header.h"


int main()
{
    setlocale(LC_ALL,"Russian");
    bool checker = true;
    string str1, str2, str3;
    while (checker){
        cout <<"������� 2 ����� � ���� ��� ����������" << endl;
        cin >>str1;
        cin >>str2;
        cin >>str3;
        checker = ((checking(str1)) && (checking(str2)) && (checking(str3)));
    }
    cout <<Operator(noZero(str1), noZero(str2), str3);
}
