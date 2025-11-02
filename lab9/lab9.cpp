#include <iostream>
#include <string>

using namespace std;

class Dog {
private:
    string name;
    int age;

public:
    Dog(string n, int a) {
        name = n;
        age = a;
    }

    Dog(const Dog &other) {
        cout << "Copy Constructor" << endl;
        name = other.name;
        age = other.age;
    }

    void show() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Dog fido {"Fido", 4};
    Dog spot1 {"Buddy", 7};

    fido.show();
    spot1.show();

    Dog spot {"Spot", 5};
    Dog twin {spot};

    twin.show();

    cout << endl;
    return 0;
}
