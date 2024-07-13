#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account
{
private:
    std::string accountNumber;
    double balance;

public:
    Account(std::string accountNumber, double initialBalance);
    // The '~' symbol before the class name denotes a destructor.
    // Destructors are special member functions that are called when an object is destroyed.
    // They are used to perform any necessary cleanup operations.
    virtual ~Account();

    // The 'const' keyword after these member functions indicates that they do not modify
    // the object's state (i.e., they don't change any member variables).
    // This allows these functions to be called on const objects of the Account class.
    std::string getAccountNumber() const;
    double getBalance() const;

    void deposit(double amount);
    bool withdraw(double amount);
};

// The 'inline' keyword is used here to suggest to the compiler that it should
// replace any call to this function with the function's body directly.
// This can potentially improve performance by reducing function call overhead.
inline Account::Account(std::string accountNumber, double initialBalance)
    : accountNumber(accountNumber), balance(initialBalance) {}

// Inline destructor, which can be beneficial for simple destructors like this one.
// The '~' symbol here indicates that this is the destructor implementation.
// Destructors are called automatically when an object goes out of scope or is explicitly deleted.
inline Account::~Account() {}

// The 'const' keyword here ensures that the function doesn't modify any member variables
// and can be called on const Account objects.
// The 'inline' keyword suggests that the compiler should insert this function's code
// directly at the call site, potentially improving performance for this small function.
inline std::string Account::getAccountNumber() const
{
    return accountNumber;
}

// Similarly, this function is marked 'const' to indicate it doesn't change the object's state.
// The 'inline' keyword is used here for the same reasons as above.
inline double Account::getBalance() const
{
    return balance;
}

// Inline member function for deposit operation.
// For small functions like this, inlining can be more efficient than a regular function call.
inline void Account::deposit(double amount)
{
    balance += amount;
}

// Inline member function for withdraw operation.
// The 'inline' keyword here suggests that the compiler should consider replacing
// the function call with the function body, which can be beneficial for performance
// in frequently called small functions like this one.
inline bool Account::withdraw(double amount)
{
    if (balance >= amount)
    {
        balance -= amount;
        return true;
    }
    return false;
}

#endif // ACCOUNT_H
