#include "Account.h"
#include <iostream>

int main() {
    Account myAccount("123456789", 1000.0);

    std::cout << "Account Number: " << myAccount.getAccountNumber() << std::endl;
    std::cout << "Initial Balance: $" << myAccount.getBalance() << std::endl;

    myAccount.deposit(500.0);
    std::cout << "Balance after deposit: $" << myAccount.getBalance() << std::endl;

    if (myAccount.withdraw(200.0)) {
        std::cout << "Balance after withdrawal: $" << myAccount.getBalance() << std::endl;
    } else {
        std::cout << "Withdrawal failed due to insufficient funds." << std::endl;
    }

    return 0;
}
