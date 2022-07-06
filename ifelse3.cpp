#include<iostream>
using namespace std;
int main()
{
    #ifdef ONLINE_DEBUG // not part of the code, used to beautify input & output
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif 

    int savings;
    cin >> savings;

    if(savings>5000)
    {
        if(savings>10000){
            cout << "roadtrip\n";
        }else{
            cout << "shopping with neha\n";
        }
    } else if (savings>2000)
    {
        cout <<"rashmi\n";
    }
    else 
    {
        cout <<"freinds\n";
    }
    return 0;
}