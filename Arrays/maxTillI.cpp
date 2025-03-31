#include <bits/stdc++.h>
#define ll long long
const int M = 1e9 + 7;
using namespace std;

int32_t main()
{
    int n; cin >> n; int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int res_arr[n];

    for(int i = 0; i < n; i++){
        int max = arr[i];
            for(int j = 0; j < i; j++){
                if(arr[j] > max) max = arr[j];
            }
        res_arr[i] = max;
    }

    for(int i = 0; i < n; i++){
        cout << res_arr[i] << " ";
    }

    cout << endl;
    return 0;
}