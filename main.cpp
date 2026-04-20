#include <iostream>
using namespace std;

int main() {
    string choice;

    cout << "=== MINI ADVENTURE GAME ===" << endl;
    cout << "You wake up in a dark room..." << endl;

    cout << "Do you go LEFT or RIGHT? ";
    cin >> choice;

    if (choice == "LEFT" || choice == "left") {
        cout << "You find a computer terminal..." << endl;

        cout << "Do you HACK or LEAVE? ";
        cin >> choice;

        if (choice == "HACK" || choice == "hack") {
            cout << "You discovered secret data! You win!" << endl;
        } else {
            cout << "You left safely, but missed the opportunity." << endl;
        }

    } else if (choice == "RIGHT" || choice == "right") {
        cout << "You fall into a trap. Game over." << endl;
    } else {
        cout << "Invalid choice. Game over." << endl;
    }

    cout << "Thanks for playing!" << endl;

    return 0;
}

// Bruno was heree ;D
