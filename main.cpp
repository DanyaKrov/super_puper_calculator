#include "header.h"

int main()
{
    system("Color A");
    setlocale(LC_ALL,"Russian");
    bool checker = false;
    string str;
    vector<string> vec;
    while (!checker){
        cout <<"������� 2 ����� � ���� ��� ����������, ���������� ���������" << endl;
        vec = {};
        while (getline(cin, str, ' ') && (vec.size() != 3))
        {
            vec.push_back(str);
        }
        checker = (checking(vec[0]));
        checker = (checking(vec[1]));
    }
    cout <<Operator(vec[0], vec[1], vec[2]);
}
