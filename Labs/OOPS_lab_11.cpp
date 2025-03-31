// Protected Data Access
#include <iostream>
using namespace std;
class Base {
protected:
    int x = 10;
public:
    void showX() { cout << "Value of x: " << x << endl; }
};
class Derived : public Base {
public:
    void accessProtected() { cout << "Accessing x from Derived: " << x << endl; }
};
int main() {
    Derived obj;
    obj.accessProtected();
    obj.showX();
    return 0;
}