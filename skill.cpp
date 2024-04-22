#include <iostream>

using namespace std;

int main()
{
    string name;
    int str, health, luck;

    cout << "********************************************" << endl;
    cout << "                      *                     " << endl;
    cout << "            Create your Character!!!        " << endl;
    cout << "********************************************" << endl;
    cout << "                      *                     " << endl << endl;

    cout << "Enter the name of your character: "
    cin >> name;

    cout << endl << "Enter Strength (1-10): ";
    cin >> str;
    cout << endl << "Enter Health (1-10): ";
    cin >> health;
    cout << endl << "Enter Luck (1-10): ";
    cin >> luck;

    if ((str + health + luck) > 15) {
        cout << "You have given your character too many points! Default values have been assigned: " << endl << endl;
        str = 5;
        health = 5;
        luck = 5;
    }
    cout << "Character Name: " << name << endl;
    cout << "=========================" << endl;
    cout << "Strength:  " << str << endl;;
    cout << "Health:    " << health << endl;
    cout << "Luck:      " << luck << endl;

    return 0;
}
