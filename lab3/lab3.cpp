#include <iostream>
using namespace std;

int main() {
    // -------------------------------
    // Task 1
    // -------------------------------
    cout << "Task 1:" << endl;

    int num1 = 13;
    int num2 = 0;

    num1 = 5;
    num2 = num1;

    cout << "Updated values -> num1: " << num1 << ", num2: " << num2 << endl << endl;



    // -------------------------------
    // Task 2
    // -------------------------------
    cout << "Task 2:" << endl;

    int base = 4;
    int value = base;

    value *= 2;
    cout << "After doubling (*=2): " << value << endl;

    value += 9;
    cout << "After adding 9 (+=9): " << value << endl;

    value -= 3;
    cout << "After subtracting 3 (-=3): " << value << endl;

    value /= 2;
    cout << "After dividing by 2 (/=2): " << value << endl;

    value -= base;
    cout << "After subtracting base (" << base << "): " << value << endl;

    value %= 3;
    cout << "After modulo 3 (%=3): " << value << endl << endl;



    // -------------------------------
    // Task 3
    // -------------------------------
    cout << "Task 3:" << endl;

    int person_age = 16;
    bool has_parental_permission = true;
    bool has_valid_ssn = true;
    bool has_accidents = false;

    bool eligible_by_age = (person_age >= 18) || (person_age >= 15 && has_parental_permission);
    bool can_be_hired = eligible_by_age && has_valid_ssn && !has_accidents;

    if (can_be_hired) {
        cout << "Congratulations! You are hired!" << endl;
    } else {
        cout << "Sorry, we cannot hire you!" << endl;
    }

    cout << endl;



    // -------------------------------
    // Task 4
    // -------------------------------
    cout << "Task 4:" << endl;
    int total_cents;
    cout << "Please enter total cents: ";
    cin >> total_cents;

    int coins_100 = total_cents / 100;  // dollars
    total_cents %= 100;

    int coins_25 = total_cents / 25;    // quarters
    total_cents %= 25;

    int coins_10 = total_cents / 10;    // dimes
    total_cents %= 10;

    int coins_5 = total_cents / 5;      // nickels
    total_cents %= 5;

    int coins_1 = total_cents;          // pennies

    cout << "Minimal coin combination:" << endl;
    cout << "1 dollar coins: " << coins_100 << endl;
    cout << "25 cent coins: " << coins_25 << endl;
    cout << "10 cent coins: " << coins_10 << endl;
    cout << "5 cent coins: " << coins_5 << endl;
    cout << "1 cent coins: " << coins_1 << endl;

    cout << endl;
    return 0;
}
