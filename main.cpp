#include <iostream>

using namespace std;

int main()
{
    int currentYear = 2023;
    int input;

    cout << "What year were you born in? ";
    cin >> input;

    cout << "You are now " << currentYear - input << " years old!\n";

    return 0;
}
