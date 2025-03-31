#include <bits/stdc++.h>
#define ll long long
const int M = 1e9 + 7;
using namespace std;

int map_ct[1000000] = {0};

int32_t main()
{
    int n; cin >> n; int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int repeated_elem = INT_MIN;

    for(int i = 0; i < n; i++){
        map_ct[arr[i]]++;
        if(map_ct[arr[i]] > 1){
            repeated_elem = arr[i]; break;
        }
    }

    for(int i = 0; i < n; i++){
        if(arr[i] == repeated_elem){
            cout << i << endl; break;
        }
    }

    return 0;
}