//write a program to add 2 binary no.s using FUNCTIONS:

#include<iostream>
using namespace std;

int binaryToDecimal(int n)
{
    int ans = 0;
    int x = 1;
    while(n>0){
        int y = n%10;
        ans += x*y;
        x*=2;
        n/=10;
    }
    return ans;
}


int octalToDecimal(int n)
{
    int ans = 0;
    int x = 1;
    while(n>0){
        int y = n%10;
        ans += x*y;
        x*=8;
        n/=10;
    }
    return ans;
}


int hexadecimalToDecimal(string n)
{
    int ans = 0;
    int x = 1;

    int s = n.size();
    for(int i=s-1; i>=0; i--)
    {
        if(n[i] >= '0' && n[i] <= '9')
        {
            ans += x*(n[i]-'0');
        }
        else if(n[i] >= 'A' && n[i] <= 'F')
        {
            ans += x*(n[i]-'A' + 10);
        }
        x*= 16;
    }
    return ans;
}


int DecimalToBinary(int n)
{
    int x = 1;
    int ans = 0;
    while(x<=n){
        x *= 2;
    }
    x/=2;

    while(x>0)
    {
        int lastDigit = n/x;
        n-= lastDigit*x;
        x/=2;
        ans = ans*10 + lastDigit;
    }
    return ans;
}


int DecimalToOctal(int n)
{
    int x = 1;
    int ans = 0;
    while(x<=n){
        x *= 8;
    }
    x/=8;

    while(x>0)
    {
        int lastDigit = n/x;
        n-= lastDigit*x;
        x/=8;
        ans = ans*10 + lastDigit;
    }
    return ans;
}


string DecimalToHexadecimal(int n)
{
    int x = 1;
    string ans = "";
    while(x<=n){
        x*=16;
    }
    x/=16;

    while(x>0){
        int lastDigit = n/x;
        n-= lastDigit*x;
        x/=16; 

        if(lastDigit<=9){
            ans = ans + to_string(lastDigit);
        }
        else{
            char c = 'A' + lastDigit - 10;
            ans.push_back(c);
        }  
        return ans;
    }

}

int reverse(int n)
{
    int ans = 0;
    while(n>0){
        int lastDigit = n%10;
        ans = ans*10 + lastDigit;
        n/=10;
    }
    return ans;
}

int addBinary(int a, int b)
{
    int ans = 0;
    int prevCarry = 0;

    while(a>0 && b>0){
        
        if(a%2 == 0 && b%2 == 0){
            ans = ans * 10 + prevCarry;
            prevCarry = 0;
        }
        else if((a%2 == 0 && b%2 == 1) || (a%2 == 1 && b%2 == 0)){
            if(prevCarry == 1){
                ans = ans * 10 + 0;
                prevCarry = 1;
            }
            else{
                ans = ans * 10 + 1;
                prevCarry = 0;
            }

        }
        else{
            ans = ans * 10 + prevCarry;
            prevCarry = 1;
        }
        a/=10;
        b/=10;
    } 
    while(a>0)
    {
        if(prevCarry==1)
        {
           if(a%2 == 1){
                ans = ans * 10 + 0;
                prevCarry = 1;
           }
           else{
            ans = ans * 10 + 1;
            prevCarry = 0;
           }
        }
        else{
            ans =  ans * 10 + (a%2);
        }
        a/=10;
    }

    while(b>0)
    {
        if(prevCarry==1)
        {
           if(b%2 == 1){
                ans = ans * 10 + 0;
                prevCarry = 1;
           }
           else{
            ans = ans * 10 + 1;
            prevCarry = 0;
           }
        }
        else{
            ans =  ans * 10 + (b%2);
        }
        b/=10;
    }

    if(prevCarry==1){
        ans = ans * 10 + 1;
    }
    ans= reverse(ans);
    return ans;
    
}   

int main(){

int a,b;
cin >>a>>b;

cout <<addBinary(a,b) <<endl;
   

    return 0;
}