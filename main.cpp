// Name: Andrew Savio
// CIS 5 - Homework 6: Menu (do-while)

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int choice;

    cout << "Enter your name: ";
    getline(cin, name);

    do {
        cout << "\n--- Menu ---\n";
        cout << "1. Say hello\n";
        cout << "2. Count down\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Hello " << name << endl;
        } else if (choice == 2) {
            int start;
            cout << "Count down from: ";
            cin >> start;
            cout << "Countdown: ";
            for (int i = start; i >= 0; i--) {
                cout << i << " ";
            }
            cout << endl;
        } else if (choice != 3) {
            cout << "Invalid choice. Enter 1, 2, or 3.\n";
        }
    } while (choice != 3);

    cout << "The Menu is closed" << endl;
    return 0;
}
