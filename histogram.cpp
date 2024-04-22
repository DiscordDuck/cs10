#include <iostream>
#include <time.h>
#include <cmath>

using namespace std;

// source: https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/
void reverseArr (int arr[], int s, int e) {
    while (s < e)
    {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
}

int main()
{
    srand(time(0));

    char symbol, ori;
    int a, b, num, range;
    cout << "Enter a symbol: ";
    cin >> symbol;
    cout << "Enter the min range: ";
    cin >> a;
    cout << "Enter the max range: ";
    cin >> b;
    cout << "How many numbers to generate? ";
    cin >> num;
    cout << "What orientation do you want? (H/V) ";
    cin >> ori;
    range = (b - a + 1) / 10;

    if (a > b) {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }
    if (num < (b - a + 1)) num = b - a + 1;

    int arr[num];
    for (int i = 0; i < num; i++) {
        arr[i] = rand() % (b - a + 1) + a;
    }

    cout << endl;
    if (ori == 'H' || ori == 'h') {
        cout << "Welcome to the Random Number Generator Tester" << endl << endl;
        cout << "Range:\t\tFrequency (1 line = 25 occurrences)" << endl;
        for (int j = 0; j < range; j++) {
            int n = 0;
            cout << j * 10 + 1 << " - " << (j + 1) * 10;
            for (int i = 0; i < 3 - to_string(j + 1).length(); i++) {
               cout << "\t";
            }
            for (int i = 0; i < num; i++) {
                if (arr[i] > j * 10 && arr[i] < (j + 1) * 10 + 1) n += 1;
            }
            for (int i = 0; i < round(n / 25); i++) {
                cout << symbol << " ";
            }
            cout << endl;
        }
    }
    else if (ori == 'V' || ori == 'v') {
        cout << "Welcome to the Random Number Generator Tester" << endl << endl;
        for (int i = 0; i < range / 2 - 2; i++) cout << "\t";
        cout << "Frequency (1 line = 25 occurrences)" << endl;
        for (int i = 0; i < range + 1; i++) {
            cout << "--------";
        }
        cout << endl;
        for (int j = 0; j < 3; j++) {
            cout << "|";
            for (int i = 0; i < range + 1; i++) {
                cout << "\t";
            }
            cout << "|" << endl;
        }
        int nmax = 0;
        for (int j = 0; j < range; j++) {
            int n = 0;
            for (int i = 0; i < num; i++) {
                if (arr[i] > j * 10 && arr[i] < (j + 1) * 10 + 1) n += 1;
            }
            if (nmax < round(n / 25)) nmax = round(n / 25);
        }
        int narr[nmax] = {0};
        for (int j = 0; j < range; j++) {
            int n = 0;
            for (int i = 0; i < num; i++) {
                if (arr[i] > j * 10 && arr[i] < (j + 1) * 10 + 1) n += 1;
            }
            for (int i = 0; i < round(n / 25); i++) {
                if (!narr[i]) narr[i] = 1;
                else narr[i] += 1;
            }
        }
        reverseArr(narr, 0, nmax - 1);
        for (int j = 0; j < nmax; j++) {
            cout << "|";
            for (int i = 0; i < narr[j]; i++) {
                cout << "\t" << symbol;
            }
            for (int i = 0; i < range - narr[j] + 1; i++) {
                cout << "\t";
            }
            cout << "|";
            cout << endl;
        }
        for (int i = 0; i < range + 1; i++) {
            cout << "--------";
        }
        cout << endl;
        for (int i = 0; i < range; i++) {
            cout << "\t\b\b\b[" << i * 10 + 1 << "-" << (i + 1) * 10 << "]";
        }
    }
    else return 0;
    cout << endl;
    return 0;
}
