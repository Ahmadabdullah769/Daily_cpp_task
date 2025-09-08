#include <iostream>
using namespace std;
int main() 
{
    int totalBooks;
    int daysLate;
    int fine = 0;
    cout << "Enter number of borrowed books: ";
    cin >> totalBooks;
    for (int book = 1; book <= totalBooks; book++) {
        cout << "Enter days late for book " << book << ": ";
        cin >> daysLate;
        if (daysLate > 0) {
            fine = fine + (daysLate * 5);
        } else {
            cout << "Book " << book << " returned on time." << endl;
        }
    }
    cout << "Total fine to be paid: " << fine << endl;
    return 0;
}