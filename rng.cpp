#include <iostream>
#include <time.h>

using namespace std;

void guess() {
    int lnum;
    int hnum;
    cout << "What is the lower bound? ";
    cin >> lnum;
    cout << "What is the higher bound? ";
    cin >> hnum;

    if (hnum < lnum) {
        int temp = lnum;
        lnum = hnum;
        hnum = temp;
    }

    cout << endl << "Here is your number: " << (rand() % (hnum - lnum + 1) + lnum) << endl;

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

    cout << "Free number generator" << endl << "-------------------------" << endl << endl;
    guess();

    return 0;
}
