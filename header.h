#include <iostream>
#include <string>
#include <vector>

using namespace std;
#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

long long ToInt(unsigned char str);
long long itc_len(string str);
string toStr(int num);
bool checking(string str);
string Operator(string str1, string str2, string op);
long long itc_pow(int number, int number2);
int itc_find_str(string str1, string str2);
vector<int> vecRev(vector<int> vec1);
string sum(string str1, string str2);
vector<int> toVec(string str);
string strRev(string str);
string normal_str(string str, int len);
string subtr(string str1, string str2);
string itc_slice_str(string str, int start, int end);
string noZero(string str);
string neg(string str1, string str2, string oper);
bool checking_oper(string str);
void music();

#endif // HEADER_H_INCLUDED
