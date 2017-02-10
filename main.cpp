/*
 *<x7536110@outlool.com>
 *this program is licensed under the MIT.
 */
#include <iostream>
#include <string>
#include "MD5.h"
using namespace std;

int main()
{
    string temp="hello world!";
    string temp_md5;
    CMD5 cmd5;
    cmd5.GenerateMD5((unsigned char*)temp.c_str(),temp.size());
    temp_md5=cmd5.ToString();
    cout<<temp_md5<<endl;
    return 0;
}
