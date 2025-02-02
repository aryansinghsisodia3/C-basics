#include<iostream>
using namespace std;

/* To stop the execution if Negative Numbered is entered */

int main() {
    
    int n;
    cin>>n;

    /* Because do while loop is used the code will be executed first time as it is */
    /* Only after then the condition will be applied */

    do {
        cout<<n<<endl;
        cin>>n;
    } while (n>0);
    
    return 0;
}