#include<iostream>
using namespace std;

int main(){

    // Data Types

    int a;    // Declaration
    a=12;     // initialisation

    cout<<"size of int "<<sizeof(a)<<endl;

    float b;
    cout<<"size of float "<<sizeof(b)<<endl;
    
    char c;
    cout<<"size of char "<<sizeof(c)<<endl;

    bool d;
    cout<<"size of bool "<<sizeof(d)<<endl;


    long int li; // Type Modifier - Long Int
    cout<<"size of long int "<<sizeof(li)<<endl;

    short int si; // Type Modifier - Short Int
    cout<<"size of short int "<<sizeof(si)<<endl;


    return 0;
}