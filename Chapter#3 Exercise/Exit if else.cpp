//write a C++ program to read the address of a person and exit when user enter dot(  .  ) from the keyboard.//
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string address;

    cout << "Enter your address or enter dot ( . ) to exit" << endl;

    while (true) 
    {
        cin>>address;   

        if (address == ".") 
            break;

        cout << "Your address is: " << address << endl;
    }

    return 0;
}