#include <bits/stdc++.h>
#define ll long long
const int M = 1e9 + 7;
using namespace std;

void bubbleSort(int* arr, int len){
    for(int i = 0; i < len - 1; i++){
        for(int j = 0; j < len - i; j++){
            if(arr[j] > arr[j+1]) swap(arr[j], arr[j + 1]);
        }
    }
}

int32_t main()
{
    int arr[6] = {12, 45, 23, 51, 19, 8};
    bubbleSort(arr, 6);
    for(int& i : arr){
        cout << i << " ";
    }
    return 0;
}