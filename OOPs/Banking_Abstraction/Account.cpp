#include "Account.h"

Account::Account(std::string accountNumber, double initialBalance) {
    this->accountNumber = accountNumber;
    this->balance = initialBalance;
}

Account::~Account() {}

std::string Account::getAccountNumber() const {
    return accountNumber;
}

double Account::getBalance() const {
    return balance;
}

void Account::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
    }
}

bool Account::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        return true;
    }
    return false;
}
