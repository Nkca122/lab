#include <bits/stdc++.h>
#define ll long long
const int M = 1e9 + 7;
using namespace std;

int32_t main()
{
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            if((i+j)%2 == 0){
                cout << 1 << " ";
            } else {
                cout << 0 << " ";
            }
        }

        cout << endl;
    }
    return 0;
}