#include<iostream>
using namespace std;
int main()
{
    int i=2;
    i = i++ + ++i;
        //2   //3
    cout<<i<<endl;
    return 0;
}