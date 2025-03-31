#include <bits/stdc++.h>
#define ll long long
const int M = 1e9 + 7;
using namespace std;

int32_t main()
{
    // 1's complement of Positive Numbers
    int n, ncpy; cin >> n; ncpy = n;
    int exp = 0;
    while(ncpy > 0){
        ncpy = ncpy >> 1; exp++;
    }

    int abs_n_1 = round(pow(2, exp)) - 1;
    n = n ^ abs_n_1;

    cout << n << endl;

    
    return 0;
}