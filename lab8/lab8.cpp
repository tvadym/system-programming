#include <iostream>
#include <string>
using namespace std;

class Cat {
public:
    string name;
    int age;
};

class Dog {
private:
    string name;
    int age;

public:
    string get_name() {
        return name;
    }

    void set_name(const string& n) {
        name = n;
    }

    int get_age() {
        return age;
    }

    void set_age(int a) {
        age = a;
    }

    int get_human_years() {
        return age * 7;
    }

    string speak() {
        return "Woof";
    }
};

Cat test_cat() {
    Cat fluffy;
    fluffy.name = "Fluffy";
    fluffy.age = 5;
    return fluffy;
}

int main() {
    Cat fluffy = test_cat();
    cout << "Cat name: " << fluffy.name << ", age: " << fluffy.age << endl;

    Dog spot;
    spot.set_name("Spot");
    spot.set_age(7);

    cout << "Dog name: " << spot.get_name() << ", age: " << spot.get_age() << endl;
    cout << "Dog in human years: " << spot.get_human_years() << endl;
    cout << "Dog says: " << spot.speak() << endl;

    cout << endl;
    return 0;
}
