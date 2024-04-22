#include <iostream>
#include <time.h>

using namespace std;

int n = 3;

void guess() {
    int num;
    cin >> num;

    int num_ = rand() % 10 + 1;
    if (num_ == num) {
        cout << "That's correct! The number was " << num << "." << endl;
    }
    else if (n == 1) {
        cout << "The number was " << num_ << endl << "Game over :(" << endl;
        return;
    }
    else {
        cout << "l bozo, number was " << num_ << "... " << "you have " << --n << " chance";
        if (num == 1) cout << " left: ";
        else cout << "s left: ";
        guess();
    }

    /*
    string again;
    cout << "Again? (Y/N) ";
    cin >> again;
    cout << endl << endl;

    if (again == "y" || again == "Y") {
        guess();
    }
    else if (again == "n" || again == "N") {
        cout << "bye" << endl;
        return;
    }
    */
}

int main()
{
    srand(time(0));

    cout << "Very easy RNG game !!!!111!11!" << endl << "-------------------------" << endl << endl;
    cout << "Guess a number from 1 to 10: ";
    guess();

    return 0;
}
