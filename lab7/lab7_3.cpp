#include <iostream>
using namespace std;

int findMaxElement(int* arr, int size) {
    int* maxPtr = arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > *maxPtr)
            maxPtr = arr + i;
    }
    return *maxPtr;
}

int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int maxElement = findMaxElement(arr, size);
    cout << "Maximum element: " << maxElement << endl;

    return 0;
}
