//Input a number "n" and tell whether it is equal to, less than or more than "10".

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if(n>10){
        cout << "more than 10"<<endl;
    }
    else if(n<10){
        cout << "less than 10"<<endl;
    }
    else{
        cout << "Equals to 10"<<endl;
    }
    return 0;
}