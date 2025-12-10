
#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>
#include <iostream>

class Account {
protected:
    std::string name;
    double balance;
public:
    Account(std::string name="Unnamed Account", double balance=0.0);
    virtual bool deposit(double amount);
    virtual bool withdraw(double amount);
    double get_balance() const;
    friend std::ostream &operator<<(std::ostream &os, const Account &account);
};
#endif
