#include <iostream>

using namespace std;

string x[12] = {"first", "second", "third", "fourth", "fifth", "sixth", "seventh", "eighth", "ninth", "tenth", "eleventh", "twelfth"};

int main()
{
    int n = 1;

    while (n < 13) {
        cout << "On the " << x[n - 1] << " day of Christmas," << endl;
        cout << "My true love sent to me" << endl;
        switch (n)
        {
            case 12:
            cout << "Twelve drummers drumming,\n";
            case 11:
            cout << "Eleven pipers piping,\n";
            case 10:
            cout << "Ten lords a-leaping,\n";
            case 9:
            cout << "Nine ladies dancing,\n";
            case 8:
            cout << "Eight maids a-milking,\n";
            case 7:
            cout << "Seven swans a-swimming,\n";
            case 6:
            cout << "Six geese a-laying,\n";
            case 5:
            cout << "Five golden rings,\n";
            case 4:
            cout << "Four calling birds,\n";
            case 3:
            cout << "Three French hens,\n";
            case 2:
            cout << "Two turtle doves,\n";
            case 1:
            if (n == 1) cout << "A partridge in a pear tree";
            else cout << "And a partridge in a pear tree";
            if (n == 12) cout << "!";
            else cout << ".";
        }
        cout << endl << endl;
        n++;
    }
    return 0;
}
