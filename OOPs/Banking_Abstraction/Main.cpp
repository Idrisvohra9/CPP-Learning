#include "Account.h"
#include <iostream>
#include <string>

int main() {
    std::string accountNumber;
    double initialBalance;

    std::cout << "Enter account number: ";
    std::cin >> accountNumber;

    std::cout << "Enter initial balance: $";
    std::cin >> initialBalance;

    Account *myAccount = new Account(accountNumber, initialBalance);

    std::cout << "Account Number: " << myAccount->getAccountNumber() << std::endl;
    std::cout << "Initial Balance: $" << myAccount->getBalance() << std::endl;

    char choice;
    double amount;

    do {
        std::cout << "\nChoose an action:" << std::endl;
        std::cout << "1. Deposit" << std::endl;
        std::cout << "2. Withdraw" << std::endl;
        std::cout << "3. Check Balance" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice (1-4): ";
        std::cin >> choice;

        switch (choice) {
            case '1':
                std::cout << "Enter deposit amount: $";
                std::cin >> amount;
                myAccount->deposit(amount);
                std::cout << "Balance after deposit: $" << myAccount->getBalance() << std::endl;
                break;
            case '2':
                std::cout << "Enter withdrawal amount: $";
                std::cin >> amount;
                if (myAccount->withdraw(amount)) {
                    std::cout << "Balance after withdrawal: $" << myAccount->getBalance() << std::endl;
                } else {
                    std::cout << "Withdrawal failed due to insufficient funds." << std::endl;
                }
                break;
            case '3':
                std::cout << "Current Balance: $" << myAccount->getBalance() << std::endl;
                break;
            case '4':
                std::cout << "Exiting program." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != '4');

    delete myAccount;

    return 0;
}
