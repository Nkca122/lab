// Single Inheritance
#include <iostream>
using namespace std;
class Base {
public:
    void show() { cout << "Single Inheritance: Base Class" << endl; }
};
class Derived : public Base {};
int main() {
    Derived obj;
    obj.show();
    return 0;
}





