
#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H
#include "Account.h"

class Checking_Account : public Account {
private:
    static constexpr double withdraw_fee = 1.50;
public:
    Checking_Account(std::string name="Unnamed Checking Account",
                     double balance=0.0);
    virtual bool withdraw(double amount) override;
    friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);
};
#endif
