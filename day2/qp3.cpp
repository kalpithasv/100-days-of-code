#include <iostream>
using namespace std;

int main() {
    char choice;

    do {
        cout << "Do you want to continue? (y/n): ";
        cin >> choice;

        if (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N') {
            cout << "Invalid input! Please enter 'y' for Yes or 'n' for No.\n";
            continue; 
        }

        if (choice == 'y' || choice == 'Y') {
            cout << "You chose to continue.\n";
        }

    } while (choice == 'y' || choice == 'Y');

    cout << "You chose to exit the loop.\n";
    return 0;
}
