#include <iostream>
using namespace std;
class A1 {
public:
    void showA1() { cout << "Class A1" << endl; }
};
class A2 : public A1 {
public:
    void showA2() { cout << "Class A2" << endl; }
};
class A3 : public A2 {
public:
    void showA3() { cout << "Class A3" << endl; }
};
int main() {
    A3 obj;
    obj.showA1();
    obj.showA2();
    obj.showA3();
    return 0;
}