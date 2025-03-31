#include <bits/stdc++.h>
#define ll long long
const int M = 1e9 + 7;
using namespace std;
int fib(int n){
    if(n == 0 || n == 1) return 1;
    return fib(n-1) + fib(n-2);

}
int32_t main()
{
    int n; cin >> n;
    cout << fib(n) << endl;
    return 0;
}