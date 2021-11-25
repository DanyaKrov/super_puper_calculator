#include <iostream>
#include <string>
#include <vector>

using namespace std;
#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

long double ToInt(string str);
long long itc_len(string str);
string toStr(long long num);
bool checking(string str);
string Operator(string str1, string str2, string op);
long long itc_pow(int number, int number2);
int itc_find_str(string str1, string str2);
vector<int> vecRev(vector<int> vec1);
vector<int> sum(vector<int> vec1, vector<int> vec2);

#endif // HEADER_H_INCLUDED
