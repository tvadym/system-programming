
#ifndef TRUST_ACCOUNT_H
#define TRUST_ACCOUNT_H
#include "Savings_Account.h"

class Trust_Account : public Savings_Account {
private:
    int withdraw_count = 0;
public:
    Trust_Account(std::string name="Unnamed Trust Account",
                  double balance=0.0, double int_rate=0.0);
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;
    friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);
};
#endif
