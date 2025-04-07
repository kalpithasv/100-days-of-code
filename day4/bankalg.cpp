#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    double balance;

public:
    // Constructor
    BankAccount(string name) {
        accountHolderName = name;
        balance = 0.0;
    }

    // Deposit method
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Withdraw method
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance." << endl;
        }
    }

    // Check balance
    void checkBalance() {
        cout << "Current balance: " << balance << endl;
    }

    // Show account holder
    void showAccountHolder() {
        cout << "Account Holder: " << accountHolderName << endl;
    }
};

// Main function using object of BankAccount
int main() {
    string name;
    cout << "Enter your name to create a bank account: ";
    getline(cin, name);

    // Creating an object of BankAccount
    BankAccount myAccount(name);

    int choice;
    double amount;

    do {
        cout << "\n=== Bank Menu ===\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                myAccount.deposit(amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                myAccount.withdraw(amount);
                break;
            case 3:
                myAccount.checkBalance();
                break;
            case 4:
                cout << "Thank you for banking with us!" << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }

    } while(choice != 4);

    return 0;
}
