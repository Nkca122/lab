#include <bits/stdc++.h>
#define ll long long
const int M = 1e9 + 7;
using namespace std;

int32_t main()
{
    int r, c; cin >> r >> c;
    for(int i = 0; i < c; i++){
        cout << "* ";
    }
    cout << endl;

    for(int i = 0; i < r-2; i++){
        for(int j = 0; j < c; j++){
            if(j == 0 || j == c-1){
                cout <<"* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    for(int i = 0; i < c; i++){
        cout << "* ";
    }
    cout << endl;
    return 0;
}