#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Exercise 1: sum of odd numbers from 1 to 15 using for loop
    int sum = 0;
    for (int i = 1; i <= 15; i += 2) {
        sum += i;
    }
    cout << "Sum of odd numbers from 1 to 15: " << sum << endl;

    // Exercise 2: count elements divisible by 3 or 5 using range-based for loop
    vector<int> vec {1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700};
    int count = 0;

    for (int num : vec) {
        if (num % 3 == 0 || num % 5 == 0)
            count++;
    }

    cout << "Count of numbers divisible by 3 or 5: " << count << endl;

    return 0;
}
