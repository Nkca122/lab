#include <iostream>
using namespace std;

class Base {
public:
    Base(int x) {
        cout << "Base class constructor called with value: " << x << endl;
    }
};

class Derived : public Base {
public:
    Derived(int y) : Base(y) {
        cout << "Derived class constructor called with value: " << y << endl;
    }
};

int main() {
    Derived d(10); // Pass a value to the constructor
    return 0;
}
