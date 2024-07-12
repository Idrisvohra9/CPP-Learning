#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
private:
    std::string accountNumber;
    double balance;

public:
    Account(std::string accountNumber, double initialBalance);
    ~Account();

    std::string getAccountNumber() const;
    double getBalance() const;

    void deposit(double amount);
    bool withdraw(double amount);
};

#endif // ACCOUNT_H
