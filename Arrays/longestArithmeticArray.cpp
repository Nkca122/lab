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

    int len_MAX = INT_MIN;
    for(int i = 0; i < n - 1; i++){
        int j = i + 1, diff = abs(arr[j] - arr[i]);
        while(arr[j] - arr[j - 1] == diff && j < n){
            j++;
        }
        len_MAX = len_MAX < j - i ? j - i : len_MAX;
    }

    cout << len_MAX << endl;
    return 0;
}