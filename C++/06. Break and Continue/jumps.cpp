#include<iostream>
using namespace std;

int main() {

    int pocketMoney;
    pocketMoney = 3000;
    
    for (int date=1;date<=30;date++) {
        if (date%2==0) {
            continue;
        }

        if (pocketMoney<=0) {
            break;
        }

        cout<<"Neha can go out on "<<date<<"th!"<<endl;
        pocketMoney -= 400;
    }
    
    return 0;
}