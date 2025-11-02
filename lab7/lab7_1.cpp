#include <iostream>
using namespace std;

void swap_pointers(int* ptr1, int* ptr2) {
    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;
}

int main() {
    int a = 7;
    int b = 15;

    int* ptrA = &a;
    int* ptrB = &b;

    cout << "Before swap: a = " << a << ", b = " << b << endl;

    swap_pointers(ptrA, ptrB);

    cout << "After swap:  a = " << a << ", b = " << b << endl;

    return 0;
}
