#include <iostream>
#include <iomanip>
#include <ctime>

int main() {
    std::string name;
    int day, month, year;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << "Enter your birth date (dd mm yyyy): ";
    std::cin >> day >> month >> year;

    std::cout << "\nNice to meet you, " << name << "!\n";

    std::tm tm_date = {};
    tm_date.tm_mday = day;
    tm_date.tm_mon = month - 1;
    tm_date.tm_year = year - 1900;

    // Вивід у різних форматах
    std::cout << "Poland: " << std::put_time(&tm_date, "%Y-%m-%d") << "\n";
    std::cout << "Finland: " << std::put_time(&tm_date, "%d.%m.%Y") << "\n";
    std::cout << "Spain: " << std::put_time(&tm_date, "%d/%m/%Y") << "\n";
    std::cout << "USA: " << std::put_time(&tm_date, "%m/%d/%Y") << "\n";
    std::cout << "Japan: " << std::put_time(&tm_date, "%Y/%m/%d") << "\n";

    return 0;
}
