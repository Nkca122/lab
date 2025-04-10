#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base class default constructor called" << endl;
    }

    Base(int x) {
        cout << "Base class parameterized constructor called with value: " << x << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived class constructor called" << endl;
    }
};

int main() {
    // This will call Base's default constructor and Derived's constructor
    Derived d;

    // To call Base's parameterized constructor, you'd need to modify Derived's constructor like this:
    // Derived() : Base(10) { ... }

    return 0;
}
