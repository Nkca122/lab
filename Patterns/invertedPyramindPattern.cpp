#include <bits/stdc++.h>
#define ll long long
const int M = 1e9 + 7;
using namespace std;

int32_t main()
{
    int n; cin >> n;
    for(int i = n; i > 0; i--){
        for(int j = 0; j < i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}