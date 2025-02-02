#include<iostream>
using namespace std;

int main() {
    
    int a,b;
    cin>>a>>b;

    /* Nested Loops */

    for (int num=a;num<=b;num++) {

        int i;

        for (i=2;i<num;i++) {
            if (num%i==0) {
                break;
            }
        }
        if (i==num) {
            cout<<num<<" is a Prime Number"<<endl;
        }
    }
    
    
    return 0;
}