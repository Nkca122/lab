#include <bits/stdc++.h>
#define ll long long
const int M = 1e9 + 7;
using namespace std;

int32_t main()
{
    ll bin_n; cin >> bin_n;
    int n = 0, exp = 0;
    while(bin_n > 0){
        n = n + (bin_n%10) * round(pow(2, exp));
        bin_n /= 10; exp++;
    }

    cout << n << endl;

    return 0;
}