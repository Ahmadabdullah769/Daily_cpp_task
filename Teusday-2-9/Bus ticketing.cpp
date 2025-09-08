#include <iostream>
using namespace std;
int main() 
{
    int totalPassengers;
    int age;
    int totalFare = 0;
    cout << "Enter number of passengers: ";
    cin >> totalPassengers;
    for (int passenger = 1; passenger <= totalPassengers; passenger++) {
        cout << "Enter age of passenger " << passenger << ": ";
        cin >> age;

        if (age < 5) {
            cout << "Passenger " << passenger << " travels Free" << endl;
        }
        else if (age >= 60) {
            cout << "Passenger " << passenger << " gets 50% discount" << endl;
            totalFare = totalFare + 50;
        }
        else {
            cout << "Passenger " << passenger << " pays full fare" << endl;
            totalFare = totalFare + 100;
        }
    }
    cout << "Total Fare to be paid: " << totalFare << endl;
    return 0;
}