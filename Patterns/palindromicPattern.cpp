#include <bits/stdc++.h>
#define ll long long
const int M = 1e9 + 7;
using namespace std;

int32_t main()
{
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            cout << "  ";
        }
        for(int j = i; j >= 1; j--){
            cout << j << " ";
        }
        for(int j = 2; j <= i; j++){
            cout << j << " ";
        }

        cout << endl;
    }
    return 0;
}