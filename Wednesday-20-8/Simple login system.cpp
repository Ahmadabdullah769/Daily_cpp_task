#include <iostream>
#include <string>
using namespace std;

int main() {
    string username, password;

    // Correct login details (you can change them)
    string correctUsername = "admin";
    string correctPassword = "12345";

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    // Using relational (==) and logical (&&) operators
    if (username == correctUsername && password == correctPassword) {
        cout << "\nLogin Successful! Welcome, " << username << "!" << endl;
    } else {
        cout << "\nLogin Failed! Invalid username or password." << endl;
    }

    return 0;
}
