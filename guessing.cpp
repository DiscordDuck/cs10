#include <iostream>
#include <time.h>

using namespace std;

void guess() {
    int num;
    cout << "Guess a number from 1 to 10: ";
    cin >> num;

    int num_ = rand() % 11;
    if (num_ == num) {
        cout << "That's correct! The number was " << num << "." << endl;
    }
    else {
        cout << "l bozo, number was " << num_ << "..." << endl;
    }

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
}

int main()
{
    srand(time(0));

    cout << "Very easy RNG game !!!!111!11!" << endl << "-------------------------" << endl << endl;
    guess();

    return 0;
}
