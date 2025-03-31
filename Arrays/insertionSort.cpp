#include <bits/stdc++.h>
#define ll long long
const int M = 1e9 + 7;
using namespace std;
void insertionSort(int* arr, int len){
    for(int i = 1; i < len; i++){
        int curr = arr[i];
        int j = i-1;
        while(arr[j] > curr && j >= 0){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = curr;
    }
}
int32_t main()
{
    int arr[6] = {12, 45, 23, 51, 19, 8};
    insertionSort(arr, 6);
    for(int& i: arr){
        cout << i << " ";
    }
    return 0;
}