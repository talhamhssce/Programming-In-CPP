#include<iostream>
using namespace std;
int main()
{
    int a;//declaration
    a=12;//initialization

    cout<<"size of int\n"<<sizeof(a)<<" bytes"<<endl;

    float b;
    cout<<"size of float\n"<<sizeof(b)<<" bytes"<<endl;

    char c;
    cout<<"size of character\n"<<sizeof(c)<<" bytes"<<endl;

    bool d;
    cout<<"size of bool\n"<<sizeof(d)<<" bytes"<<endl;

    short int si;
    long int li;
    cout<<"size of shortint\n"<<sizeof(si)<<" bytes"<<endl;
    cout<<"size of longint\n"<<sizeof(li)<<" bytes"<<endl;

    return 0;
}