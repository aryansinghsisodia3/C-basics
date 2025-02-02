#include <iostream>
using namespace std;

int main() {

    char button;
    cout<<"Input a character [ A | B | C | D ]: ";
    cin>>button;

    switch (button)
    {
    case 'A':
        cout<<"Hello"<<endl;
        break;
    case 'B':
        cout<<"Hola"<<endl;
        break;
    case 'C':
        cout<<"Konnichiwa"<<endl;
        break;
    case 'D':
        cout<<"Ciao"<<endl;
        break;        
    
    default:
        cout<<"Invalid Option"<<endl;
        break;
    }

    return 0;
}