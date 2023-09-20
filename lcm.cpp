#include <iostream>

using namespace std;

// Euclidean algorithm applied below
int findGCD(int a, int b) {
    // b > a
    int temp1 = a;
    int temp2 = b;

    while (temp1 != temp2) {
        if (temp2 > temp1) {
            temp2 = temp2 - temp1;
        }
        else { temp1 = temp1 - temp2; }
    }
    return temp1;
}

int main()
{
    int int1;
    int int2;
    int temp;

    cout << "Enter your first number: ";
    cin >> int2;
    cout << "Enter your second number: ";
    cin >> temp;

    if (temp > int2) {
        int1 = int2;
        int2 = temp;
    }
    else { int1 = temp; }

    // int2 > int1
    cout << "LCM: " << int1 * int2 / findGCD(int1, int2);
    return 0;
}
