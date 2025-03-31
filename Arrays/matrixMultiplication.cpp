#include <bits/stdc++.h>
#define ll long long
const int M = 1e9 + 7;
using namespace std;

int32_t main()
{
    int r1, c1, c2; cin >> r1 >> c1 >> c2;
    int arr[r1][c1], brr[c1][c2], crr[r1][c2]; 
    for(int i = 0; i < r1; i++){
        for(int j = 0; j < c1; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < c1; i++){
        for(int j = 0; j < c2; j++){
            cin >> brr[i][j];
        }
    }

   for(int i = 0; i < r1; i++){
    for(int j = 0; j < c2; j++){
        crr[i][j] = 0;
        for(int k = 0; k < c1; k++){
            crr[i][j] += arr[i][k]*brr[k][j];
        }
    }
   }

   for(int i = 0; i < r1; i++){
    for(int j = 0; j < c2; j++){
        cout << crr[i][j] << " ";
    }
    cout << endl;
   }


    return 0;
}