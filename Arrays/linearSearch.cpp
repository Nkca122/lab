#include <bits/stdc++.h>
#define ll long long
const int M = 1e9 + 7;
using namespace std;

int linearSearch(int* arr, int len, int key){
    for(int i = 0; i < len; i++){
        if(arr[i] == key) return i;
    }
    return -1;
}

int32_t main()
{
    int n, key; cin >> n; int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cin >> key;
    cout << linearSearch(arr, n, key);

    return 0;
}