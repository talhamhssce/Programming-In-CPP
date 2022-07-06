#include<iostream>
using namespace std;
int main()
{
    int i=1, j=2, k=3,m;
    
    m = i-- - j-- - k--;
        //1   //2   //3


    cout << i << " " << j << " " << k << " " << m <<endl;
         //0          //1         //2         //-4 
    return 0;
}