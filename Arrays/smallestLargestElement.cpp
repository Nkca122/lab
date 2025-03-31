#include <bits/stdc++.h>
#define ll long long
const int M = 1e9 + 7;
using namespace std;

int32_t main()
{
    int len, MAX = INT_MIN, min = INT_MAX; 
    cin >> len; 
    int arr[len];

    for(int i = 0; i < len; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < len; i++){
        if(arr[i] > MAX) {MAX = arr[i];}
        if(arr[i] < min) {min = arr[i];}
    }

    cout << "Maximum: " << MAX << endl;
    cout << "Minimum: " << min << endl;

    return 0;
}