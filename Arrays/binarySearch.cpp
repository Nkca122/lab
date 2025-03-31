#include <bits/stdc++.h>
#define ll long long
const int M = 1e9 + 7;
using namespace std;

int binarySearch(int* arr, int low, int high, int key){
    int mid = (low + high)/2;
    if(low < high){
        if(arr[mid] > key){
            return binarySearch(arr, 0, mid-1, key);
        } else if(arr[mid] < key){
            return binarySearch(arr, mid + 1, high, key);
        } else if(arr[mid] == key) {
            return mid;
        }
    }

    return -1;
}

int32_t main()
{
    int arr[] = {12, 21, 34, 56, 78}, len = 5, key; cin >> key;
    cout << binarySearch(arr, 0, len, key);
    return 0;
}