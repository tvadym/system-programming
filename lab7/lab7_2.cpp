#include <iostream>
using namespace std;

void multiply_with_pointer(int* ptr, int multiplier) {
    *ptr = (*ptr) * multiplier;
}

int main() {
    int value = 8;
    int multiplier = 5;

    cout << "Before multiplication: " << value << endl;

    multiply_with_pointer(&value, multiplier);

    cout << "After multiplication:  " << value << endl;

    return 0;
}
