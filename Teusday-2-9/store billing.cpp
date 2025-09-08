#include <iostream>
using namespace std;
int main() 
{
    int totalItems;
    int price;
    int totalBill = 0;
    cout << "Enter number of items to purchase: ";
    cin >> totalItems;
    for (int item = 1; item <= totalItems; item++) {
        cout << "Enter price of item " << item << ": ";
        cin >> price;

        totalBill = totalBill + price;
    }
    if (totalBill >= 1000) {
        cout << "You get a 10% discount!" << endl;
        totalBill = totalBill - (totalBill * 0.10);
    } else {
        cout << "No discount applied." << endl;
    }
    cout << "Final Bill = " << totalBill << endl;
    return 0;
}
