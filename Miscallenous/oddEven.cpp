#include <bits/stdc++.h>
#define ll long long
const int M = 1e9 + 7;
using namespace std;

int32_t main()
{
    int n, res; cin >> n; 
    res = n&1;
    if(res == 0){
        cout << "YES";
    } else {
        cout << "NO";
    }


    return 0;
}