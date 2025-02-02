#include<iostream>
using namespace std;

/* To stop the execution if Negative Numbered is entered */

int main() {

    int num;
    cin>>num;

    while (num>0) {
        cout<<num<<endl;
        cin>>num;
    }

    return 0;
}