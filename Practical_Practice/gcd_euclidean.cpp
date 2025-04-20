// C++ program to find GCD of two numbers

#include <bits/stdc++.h>
using namespace std;

// Recursive function to return gcd of a and b
int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    // Base case
    if (a == b)
        return a;

    // a is greater
    if (a > b) {
        if (a % b == 0)
            return b;
        return gcd(a - b, b);
    }
    if (b % a == 0)
        return a;
    return gcd(a, b - a);
}

// Driver code
int main()
{
    int a = 98, b = 56;
    cout << "GCD of " << a << " and " << b << " is "
         << gcd(a, b);
    return 0;
}
