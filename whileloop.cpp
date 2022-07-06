//Take input from user , as soon as he enters negetive no. , exit the while loop:


#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while(n>0){
        cout <<n<<endl;
        cin>>n;
    }
    return 0;
}