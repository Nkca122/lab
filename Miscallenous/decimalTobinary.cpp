#include <bits/stdc++.h>
#define ll long long
const int M = 1e9 + 7;
using namespace std;

int32_t main()
{
    int n, exp = 0; cin >> n;
    ll bin_n = 0; 
    while(n > 0){
        bin_n = bin_n + (n%2) * round(pow(10, exp));
        n /= 2; exp++;
    }
    cout << bin_n << endl;
    
    return 0;
}