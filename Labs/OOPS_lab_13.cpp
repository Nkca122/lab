#include <iostream>
using namespace std;
class Base {
public:
    int x = 20;
};
class Derived : public Base {
public:
    void show() { cout << "Value of x: " << x << endl; }
};
int main() {
    Derived obj;
    cout << obj.x << endl;
    obj.show();
    return 0;
}