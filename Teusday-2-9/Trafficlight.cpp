#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    char traffic_light;      // char instead of string
    bool isPolicesignal;

    cout << "Enter traffic light (R/Y/G): " << endl;
    cin >> traffic_light;

    cout << "Is police officer giving you signal? (1 for Yes / 0 for No): ";
    cin >> isPolicesignal;

    // --- if else part for police override ---
    if (traffic_light == 'R' && isPolicesignal) {
        cout << "Police allowed you, so you may go." << endl;
    }
    else if (traffic_light == 'R' && !isPolicesignal) {
        cout << "Stop your car, wait until green light." << endl;
    }
    else if (traffic_light == 'G') {
        cout << "You can go." << endl;
    }
    else if (traffic_light == 'Y') {
        cout << "Slow down and get ready." << endl;
    }
    else {
        cout << "Invalid input, exiting program." << endl;
        exit(0);
    }

    // --- switch on char ---
    switch (traffic_light) {
        case 'R':
            cout << "Red means STOP." << endl;
            break;
        case 'Y':
            cout << "Yellow means SLOW DOWN." << endl;
            break;
        case 'G':
            cout << "Green means GO." << endl;
            break;
        default:
            cout << "Unknown signal." << endl;
    }

    return 0;
}
