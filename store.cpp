#include <iostream>

using namespace std;

// [price, amount]
class items {
    public:
        int Lemons[2] = {1, 3};
        int Sugar[2] = {2, 12};
        int Cups[2] = {6, 10};
        int Ice[2] = {5, 50};
};

items Items;

class inv {
    public:
        int Lemons = 0;
        int Sugar = 0;
        int Cups = 0;
        int Ice = 0;
        int Money = 20;
};

inv Inv;

void showItems() {
    cout << "         Inventory" << endl;
    cout << "****************************" << endl;
    cout << "Lemons:  " << Inv.Lemons << endl;
    cout << "Sugar:   " << Inv.Sugar << endl;
    cout << "Cups:    " << Inv.Cups << endl;
    cout << "Ice:     " << Inv.Ice << endl;
    cout << "Money:   $" << Inv.Money << endl;
    cout << endl;
}

void showShop() {
    cout << "        Free Lemonade" << endl;
    cout << "****************************" << endl;
    cout << "Lemons:  $" << Items.Lemons[0] << " for " << Items.Lemons[1] << endl;
    cout << "Sugar:   $" << Items.Sugar[0] << " for " << Items.Sugar[1] << endl;
    cout << "Cups:    $" << Items.Cups[0] << " for " << Items.Cups[1] << endl;
    cout << "Ice:     $" << Items.Ice[0] << " for " << Items.Ice[1] << endl;
    cout << endl;
}

int main()
{
    showItems();
    showShop();
    return 0;
}
