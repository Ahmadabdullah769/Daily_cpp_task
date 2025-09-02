#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secretNumber = rand() % 10 + 1;
    int guess;
    bool won = false;

    cout << "Welcome to the Guessing Game!" << endl;
    cout << "You have 3 chances to guess the number (1-10)." << endl;

    for (int i = 1; i <= 3; i++) {
        cout << "Attempt " << i << ": ";
        cin >> guess;

        if (guess == secretNumber) {
            cout << "Correct! You win!" << endl;
            won = true;
            break;
        } else {
            cout << "Wrong! ";
            if (i < 3) cout << "Try again." << endl;
        }
    }

    if (!won) {
        cout << "Sorry, you lost! The number was " << secretNumber << endl;
    }

    return 0;
}
