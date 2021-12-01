#include "header.h"

int main()
{
    setlocale(LC_ALL,"Russian");
    bool checker = false;
    string str1, str2, str3;
    vector<string> vec(3);
    while (!checker){
        cout <<"¬ведите 2 числа и знак дл€ вычислени€, разделЄнные пробелами" << endl;
        cin >>str1; cin >>str2; cin >>str3;
        vec[0] = str1; vec[1] = str2; vec[2] = str3;
        checker = (!checking(vec[0]));
        checker = (!checking(vec[1]));
    }
    cout <<Operator(vec[0], vec[1], vec[2]);
}
