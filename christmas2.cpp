#include <iostream>

using namespace std;

string lyrics[] = {
    "partridge in a pear tree",
    "Two turtle doves,",
    "Three French hens,",
    "Four calling birds,",
    "Five golden rings,",
    "Six geese a-laying,",
    "Seven swans a-swimming,",
    "Eight maids a-milking,",
    "Nine ladies dancing,",
    "Ten lords a-leaping,",
    "Eleven pipers piping,",
    "Twelve drummers drumming,"
};

string ordinal[] = {
    "first",
    "second",
    "third",
    "fourth",
    "fifth",
    "sixth",
    "seventh",
    "eighth",
    "ninth",
    "tenth",
    "eleventh",
    "twelfth"
};

int main()
{
    cout << endl << "Here are your lyrics:" << endl << endl;

    for (int i = 0; i < 12; i++) {
        cout << "On the " << ordinal[i] << " day of Christmas,\nmy true love sent to me" << endl;
        for (int n = i; n >= 0; n--) {
            if (n != 0) cout << lyrics[n] << endl;
            else if (i == 0) cout << "A " << lyrics[n] << "." << endl;
            else {
                cout << "And a " << lyrics[n];
                if (i == 12) cout << "!" << endl;
                else cout << "." << endl;
            }
        }
    }

    cout << endl;
    return 0;
}
