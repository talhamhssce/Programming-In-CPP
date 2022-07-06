//Write a program to output whether a number is divisible by both 2 and 3 digits
// or divisible by only one of them.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if(n%2==0 && n%3==0){
        cout << "Divisible by both (i.e. 2&3)"<<endl;
    }
    else if(n%2==0){
        cout << "Divisible by only 2"<<endl;
    }
    else if(n%3==0){
        cout << "Divisible by only 3"<<endl;
    }
    else{
        cout << "Divisible by None of them (i.e. 2&3)"<<endl;
    }
    return 0;
}