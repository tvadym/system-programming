#include <iostream>
#include <iomanip>

int main() {
    const double price_small_room = 25.0;
    const double price_large_room = 35.0;
    const double tax_rate = 0.06;  // 6%
    const int estimate_validity = 30; // days

    int num_small_rooms, num_large_rooms;

    std::cout << "How many small rooms would you like cleaned? ";
    std::cin >> num_small_rooms;

    std::cout << "How many large rooms would you like cleaned? ";
    std::cin >> num_large_rooms;

    double cost = num_small_rooms * price_small_room + num_large_rooms * price_large_room;
    double tax = cost * tax_rate;
    double total = cost + tax;

    std::cout << "\nEstimate for carpet cleaning service:\n";
    std::cout << "Number of small rooms: " << num_small_rooms << "\n";
    std::cout << "Number of large rooms: " << num_large_rooms << "\n";
    std::cout << "Price per small room: $" << price_small_room << "\n";
    std::cout << "Price per large room: $" << price_large_room << "\n";

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Cost: $" << cost << "\n";
    std::cout << "Tax: $" << tax << "\n";
    std::cout << "===============================\n";
    std::cout << "Total estimate: $" << total << "\n";
    std::cout << "This estimate is valid for " << estimate_validity << " days\n";

    return 0;
}
