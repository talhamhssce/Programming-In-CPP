#include<iostream>
using namespace std;
int main()
{
    char button;
    cout << "input a character: " << button << endl;
    cin>>button;

    // if(button == 'a')
    // {
    //     cout << "hello"<<endl;
    // }
    // else if(button == 'b')
    // {
    //     cout << "namaste"<<endl;
    // }
    // if(button == 'c')
    // {
    //     cout << "salute"<<endl;
    // }
    // if(button == 'd')
    // {
    //     cout << "hola"<<endl;
    // }
    // if(button == 'e')
    // {
    //     cout << "ciao"<<endl;
    // }
    // else
    // {
    //     cout << "I am still learning more!"<<endl;
    // }

    switch(button)
    {
    case 'a':
        cout << "hello"<<endl;
        break;
    case 'b':
        cout << "namaste"<<endl;
        break;
    case 'c':
        cout << "salute"<<endl;
        break;
    case 'd':
        cout << "hola"<<endl;
        break;
    case 'e':
        cout << "hello"<<endl;
        break;

    default:
        cout << "I am still learning more!"<<endl;
        break;
    }
    
    return 0;
}