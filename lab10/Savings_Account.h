
#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H
#include "Account.h"

class Savings_Account : public Account {
protected:
    double int_rate;
public:
    Savings_Account(std::string name="Unnamed Savings Account",
                    double balance=0.0, double int_rate=0.0);
    virtual bool deposit(double amount) override;
    friend std::ostream &operator<<(std::ostream &os, const Savings_Account &account);
};
#endif
