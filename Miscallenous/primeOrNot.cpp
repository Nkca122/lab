#include <bits/stdc++.h>
#define ll long long
const int M = 1e9 + 7;
using namespace std;

int32_t main()
{
    int n; cin >> n;
    for(int i = 2; i < sqrt(n); i++){
        if(n % i == 0){
            cout << "NO" << endl; return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}