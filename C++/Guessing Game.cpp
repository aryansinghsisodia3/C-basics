#include<iostream>
#include<ctime>

using namespace std;

int main() {
    
    int num,guess,tries,triesLeft;
    triesLeft = 10;

    srand(time(0));
    num = (rand() % 100) + 1;

    cout << "************ NUMBER GUESSING GAME *************\n";
    cout << endl;

    do {
        cout << "Enter a Guess b/w (1-100): ";
        cin >> guess;
        tries++;

        if (guess > num && triesLeft > 0) {
            cout << "Lower\n";
            cout << "Tries Left: " << triesLeft << endl;
            triesLeft--;
        } else if (guess < num && triesLeft > 0) {
            cout << "Higher\n";
            cout << "Tries Left: " << triesLeft << endl;
            triesLeft--;
        } else if (guess == num && triesLeft > 0) {
            cout << "+-------+\n";
            cout << "|You Won|\n";
            cout << "+-------+\n\n";
            cout << "Won in " << tries << " tries\n";
        } else {
            cout << "You Lose\n";
            cout << "You are out of Tries\n";
            break;
        }

    } while (guess != num);
    
    cout << "***********************************************";
    
    return 0;
}