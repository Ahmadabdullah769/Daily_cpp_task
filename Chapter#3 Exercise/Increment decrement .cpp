#include <iostream>
using namespace std;
int main() 
{
    int a = 5;
    // Post Increment
    cout << "a = " << a << endl;      // prints 5
    cout << "a++ = " << ++a << endl;  // prints 5 (uses old value first, then adds 1)
    cout << "Now a = " << a << endl;  // prints 6
    // Post Decrement
    cout << "a-- = " << a-- << endl;  // prints 6 (uses old value first, then subtracts 1)
    cout << "Now a = " << a << endl;  // prints 5

    return 0;
}