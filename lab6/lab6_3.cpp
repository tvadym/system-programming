#include <iostream>
#include <string>
using namespace std;

void print_guest_list(const string guests[], size_t count);
void clear_guest_list(string guests[], size_t count);

int main() {
    string guests[] = {"Emma", "Liam", "Olivia", "Noah", "Sophia", "James"};
    size_t count = sizeof(guests) / sizeof(guests[0]);

    cout << "Guest list before the event:\n";
    print_guest_list(guests, count);

    clear_guest_list(guests, count);

    cout << "\nGuest list after the event:\n";
    print_guest_list(guests, count);

    return 0;
}

void print_guest_list(const string guests[], size_t count) {
    for (size_t i = 0; i < count; i++) {
        if (!guests[i].empty())
            cout << guests[i] << endl;
    }
}

void clear_guest_list(string guests[], size_t count) {
    for (size_t i = 0; i < count; i++) {
        guests[i].clear();
    }
}
