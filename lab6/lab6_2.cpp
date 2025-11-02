#include <iostream>
using namespace std;

double fahrenheit_to_celsius(double fahrenheit);
double fahrenheit_to_kelvin(double fahrenheit);

int main() {
    double fahrenheit;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    // Your solution for Exercise 2
    double celsius = fahrenheit_to_celsius(fahrenheit);
    double kelvin = fahrenheit_to_kelvin(fahrenheit);

    cout << "Temperature in Celsius: " << celsius << endl;
    cout << "Temperature in Kelvin: " << kelvin << endl;

    return 0;
}

double fahrenheit_to_celsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

double fahrenheit_to_kelvin(double fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0 + 273.15;
}
