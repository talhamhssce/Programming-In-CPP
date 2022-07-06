//print numbers from 1 to 100, we want that which number is divisible by 3 should not be printed

#include<iostream>
using namespace std;
int main()
{
    for(int i = 0; i <100; i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;

    }
    return 0;
}