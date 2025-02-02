#include <iostream>
using namespace std;

int main() {

    float n1;
    cout<<"Enter Number 1: ";
    cin>>n1;

    float n2;
    cout<<"Enter Number 2: ";
    cin>>n2;
    
    cout<<" "<<endl;

    cout<<"1. [+] Addition"<<endl;
    cout<<"2. [-] Subtraction"<<endl;
    cout<<"3. [*] Multiplcation"<<endl;
    cout<<"4. [/] Division"<<endl;
    
    cout<<" "<<endl;

    char choice;
    cout<<"Enter your Choice: ";
    cin>>choice;

    switch (choice)
    {
    case '1':
        cout<<"Your answer is: "<<n1+n2<<endl;
        break;
    case '2':
        cout<<"Your answer is: "<<n1-n2<<endl;
        break;
    case '3':
        cout<<"Your answer is: "<<n1*n2<<endl;
        break;
    case '4':
        cout<<"Your answer is: "<<n1/n2<<endl;
        break;
    
    default:
        cout<<"Enter correct option!!!";
        break;
    }

    return 0;
}