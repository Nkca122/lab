// Private Base Members in Derived Class
#include <iostream>
using namespace std;
class Base {
public:
    int x = 5;
};
class Derived : public Base {
private:
    using Base::x;
public:
    void show() { cout << "Value of x: " << x << endl; }
};
int main() {
    Derived obj;
    obj.show();
    return 0;
}