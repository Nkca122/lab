#include <bits/stdc++.h>
#define ll long long
const int M = 1e9 + 7;
using namespace std;

int32_t main()
{
    int r, c; cin >> r >> c; int arr[r][c]; bool flag[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j]; flag[i][j] = false;
        }
    }

    for(int i = 0; i < r; i++){
        for(int j = i; j < c; j++){
            swap(arr[i][j], arr[j][i]); 
        }
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}