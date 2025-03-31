#include <bits/stdc++.h>
#define ll long long
const int M = 1e9 + 7;
using namespace std;

void selectionSort(int* arr, int len){
    for(int i = 0; i < len - 1; i++){
        int min = i;
        for(int j = i + 1; j < len; j++){
            if(arr[j] < arr[min]) min = j;
        }
        swap(arr[i], arr[min]);
    }

    return;
}

int32_t main()
{
    int n; cin >> n; int arr[n]; 
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
    selectionSort(arr, n);

        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }

    cout << endl;
    return 0;
}