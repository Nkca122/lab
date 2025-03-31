#include <bits/stdc++.h>
#define ll long long
const int M = 1e9 + 7;
using namespace std;

int32_t main()
{
    int n; cin >> n;
    int rev_n = 0;

    while(n > 0){
        rev_n = rev_n * 10 + n%10;
        n /= 10;
    }

    cout << rev_n << endl;
    return 0;
}