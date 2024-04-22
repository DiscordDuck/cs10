#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double cups;
double lids;
double straws;

string again;

void func() {
    cout << "How many cups would you like? ($0.05 ea.) ";
    cin >> cups;
    cout << "How many lids would you like? ($0.02 ea.) ";
    cin >> lids;
    cout << "How many straws would you like? ($0.03 ea.) ";
    cin >> straws;

    if (cups != lids) cout << "Check the order" << endl;

    cout << endl << "Total price (with GST): $" << setprecision(2) << fixed << floor(1.05 * (cups * 0.05 + lids * 0.02 + straws * 0.03) * 100 + 0.5) / 100 << endl;


    cout << "Again? (Y/N) ";
    cin >> again;
    if (again == "Y" || again == "y") {
        cout << endl;
        func();
    }
    else return;
}

int main()
{
    cout << "                   Chow" << endl;
    cout << "===========================================" << endl << endl;
    func();

    return 0;
}
