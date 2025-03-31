#include <iostream>
using namespace std;

class Circle
{
public:
    int radius;
    Circle(int rad)
    {
        radius = rad;
    }
    inline float area()
    {
        return 3.14 * radius * radius;
    }
};

int main()
{
    Circle c = 2;
    cout << c.radius << "\t" << c.area() << endl;
}
