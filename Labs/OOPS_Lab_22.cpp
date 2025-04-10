#include <iostream>
using namespace std;

class Base1 {
public:
    Base1() {
        cout << "Base1 constructor called" << endl;
    }
};

class Base2 {
public:
    Base2() {
        cout << "Base2 constructor called" << endl;
    }
};

// Derived class from Base1 and Base2
class Derived : public Base1, public Base2 {
public:
    Derived() {
        cout << "Derived constructor called" << endl;
    }
};

int main() {
    Derived d; // This will call Base1, Base2, and then Derived constructor
    return 0;
}
