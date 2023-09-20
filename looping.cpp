#include <iostream>

using namespace std;

string name = "Allen";

int numRepeats;
int divisibleBy;

void task1() {
    for (int i = 0; i < 50; i++) {
        cout << name << ", ";
    }
    cout << "\b\b " << endl << endl;
}
void task2() {
    cout << "How many times do you want your name repeated? ";
    cin >> numRepeats;
    for (int i = 0; i < numRepeats; i++) {
        cout << name << ", ";
    }
    cout << "\b\b " << endl << endl;
}
void task3() {
    for (int i = 100; i < 201; i++) {
        if (i % 4 == 0) cout << i << ", ";
    }
    cout << "\b\b " << endl << endl;
}
void task4() {
    for (int i = 100; i < 201; i++) {
        if (i % 6 == 0) cout << i << ", ";
    }
    cout << "\b\b " << endl << endl;
}
void task5() {
    cout << "What number do you want to divide by? ";
    cin >> divisibleBy;
    for (int i = 100; i < 201; i++) {
        if (i % divisibleBy == 0) cout << i << ", ";
    }
    cout << "\b\b " << endl << endl;
}

int main()
{
    cout << "---- TASK 1" << endl;
    task1();

    cout << "---- TASK 2" << endl;
    task2();

    cout << "---- TASK 3" << endl;
    task3();

    cout << "---- TASK 4" << endl;
    task4();

    cout << "---- TASK 5" << endl;
    task5();
}
