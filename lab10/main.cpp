
#include <iostream>
#include <vector>
#include "Account_Util.h"
using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;

    vector<Account> accounts {
        Account {}, Account {"Larry"}, Account {"Moe", 2000}, Account {"Curly", 5000}
    };
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);

    vector<Savings_Account> sav_accounts {
        Savings_Account {}, Savings_Account {"Superman"},
        Savings_Account {"Batman", 2000}, Savings_Account {"Wonderwoman", 5000, 5.0}
    };
    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);

    vector<Checking_Account> chk {
        Checking_Account {}, Checking_Account {"Mike",1500}, Checking_Account{"Phil",5000}
    };
    display(chk);
    deposit(chk, 1000);
    withdraw(chk, 2000);

    vector<Trust_Account> trust {
        Trust_Account {}, Trust_Account {"Richie", 10000,5}, Trust_Account{"Sarah",20000,4}
    };
    display(trust);
    deposit(trust, 6000);
    withdraw(trust, 2500);
    withdraw(trust, 2500);
    withdraw(trust, 2505);
    withdraw(trust, 2500); // fail

    return 0;
}
