#include <bits/stdc++.h>
#define ll long long
const int M = 1e9 + 7;
using namespace std;

int32_t main()
{
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i + j >= n - 1){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }

        cout << endl;
    }
    return 0;
}