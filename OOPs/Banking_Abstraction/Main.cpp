#include "Account.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    string accountNumber;
    double initialBalance;

    cout << "Enter account number: ";
    cin >> accountNumber;

    cout << "Enter initial balance: $";
    cin >> initialBalance;

    Account *myAccount = new Account(accountNumber, initialBalance);

    cout << "Account Number: " << myAccount->getAccountNumber() << endl;
    cout << "Initial Balance: $" << myAccount->getBalance() << endl;

    char choice;
    double amount;

    do {
        cout << "\nChoose an action:" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case '1':
                cout << "Enter deposit amount: $";
                cin >> amount;
                myAccount->deposit(amount);
                cout << "Balance after deposit: $" << myAccount->getBalance() << endl;
                break;
            case '2':
                cout << "Enter withdrawal amount: $";
                cin >> amount;
                if (myAccount->withdraw(amount)) {
                    cout << "Balance after withdrawal: $" << myAccount->getBalance() << endl;
                } else {
                    cout << "Withdrawal failed due to insufficient funds." << endl;
                }
                break;
            case '3':
                cout << "Current Balance: $" << myAccount->getBalance() << endl;
                break;
            case '4':
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != '4');

    delete myAccount;

    return 0;
}
