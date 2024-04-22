#include <iostream>

using namespace std;

int s, h, l;
string name;
string str;

void func() {
    cout << "Enter Strength (1-10):    ";
    cin >> s;
    cout << "Enter Health (1-10):      ";
    cin >> h;
    cout << "Enter Luck (1-10):        ";
    cin >> l;

    if (s + h + l > 15) {
        s = 5;
        h = 5;
        l = 5;
    }

    cout << endl << endl << "Character Name:    " << name << endl;
    cout << "=============================" << endl;
    cout << "Strength:  " << s << endl;
    cout << "Health:    " << h << endl;
    cout << "Luck:      " << l << endl << endl;

    cout << "Do you accept these values? (Y/N)" << endl << ">> ";
    cin >> str;
    if (str == "Y" || str == "y") {
        return;
    }
    else {
        func();
    }
}

int main()
{
    cout << endl << "Enter a name:             ";
    cin >> name;
    func();
    return 0;
}
