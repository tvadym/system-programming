#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double bill_total;
    int number_of_guests;

    cout << "Введіть загальну суму рахунку: ";
    cin >> bill_total;

    cout << "Введіть кількість гостей: ";
    cin >> number_of_guests;

    if (number_of_guests <= 0) {
        cout << "Кількість гостей має бути більшою за 0!" << endl;
        return 1;
    }

    double individual_bill = bill_total / number_of_guests;

    double individual_bill_1 = floor(individual_bill);
    double individual_bill_2 = round(individual_bill);
    double individual_bill_3 = ceil(individual_bill);

    cout << "\nСума на одну особу в різних локаціях:" << endl;
    cout << "Локація 1 (округлення вниз): " << individual_bill_1 << endl;
    cout << "Локація 2 (до найближчого):  " << individual_bill_2 << endl;
    cout << "Локація 3 (округлення вгору): " << individual_bill_3 << endl;

    return 0;
}
