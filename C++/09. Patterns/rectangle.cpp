#include <iostream>
using namespace std;

int main() {

    int row, col;

    cout<<"Enter No. of Rows: ";
    cin>>row;

    cout<<"Enter No. of Columns: ";
    cin>>col;

    for (int i=1;i<=row;i++) {
        for (int j=1;j<=col;j++) {
            cout<<" * ";
        }
        cout<<endl;
    }

    return 0;
}