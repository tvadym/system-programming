
#include "Account_Util.h"
#include <iostream>

void display(const std::vector<Account> &accounts) {
    std::cout << "\n=== Accounts ===\n";
    for (const auto &acc: accounts) std::cout << acc << std::endl;
}
void deposit(std::vector<Account> &accounts, double amount) {
    for (auto &acc: accounts) acc.deposit(amount);
}
void withdraw(std::vector<Account> &accounts, double amount) {
    for (auto &acc: accounts) acc.withdraw(amount);
}

void display(const std::vector<Savings_Account> &accounts) {
    std::cout << "\n=== Savings Accounts ===\n";
    for (const auto &acc: accounts) std::cout << acc << std::endl;
}
void deposit(std::vector<Savings_Account> &accounts, double amount) {
    for (auto &acc: accounts) acc.deposit(amount);
}
void withdraw(std::vector<Savings_Account> &accounts, double amount) {
    for (auto &acc: accounts) acc.withdraw(amount);
}

void display(const std::vector<Checking_Account> &accounts) {
    std::cout << "\n=== Checking Accounts ===\n";
    for (const auto &acc: accounts) std::cout << acc << std::endl;
}
void deposit(std::vector<Checking_Account> &accounts, double amount) {
    for (auto &acc: accounts) acc.deposit(amount);
}
void withdraw(std::vector<Checking_Account> &accounts, double amount) {
    for (auto &acc: accounts) acc.withdraw(amount);
}

void display(const std::vector<Trust_Account> &accounts) {
    std::cout << "\n=== Trust Accounts ===\n";
    for (const auto &acc: accounts) std::cout << acc << std::endl;
}
void deposit(std::vector<Trust_Account> &accounts, double amount) {
    for (auto &acc: accounts) acc.deposit(amount);
}
void withdraw(std::vector<Trust_Account> &accounts, double amount) {
    for (auto &acc: accounts) acc.withdraw(amount);
}
