#include <iostream>
using namespace std;

int main() {

    int num;
    cin>>num;

    if (num%2==0 && num%3==0) {
        cout<<"Divisible by both 2 and 3"<<endl;
    }
    else if (num%2==0) {
        cout<<"Divisible by 2"<<endl;
    }
    else if (num%3==0) {
        cout<<"Divisible by 3"<<endl;
    }
    else {
        cout<<"Divisible by neither 2 nor 3"<<endl;
    }

    return 0;
}