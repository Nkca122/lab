#include <bits/stdc++.h>
#define ll long long
const int M = 1e9 + 7;
using namespace std;

int32_t main()
{
    int n; cin >> n; int arr[n];
    for(int i = 0 ; i < n; i++){
        cin >> arr[i];
    }

    int record_days = 0;

    for(int i = n - 1; i >= 0; i--){
        int curr = arr[i]; bool flag = false;
        for(int j = i - 1; j >= 0; j--){
            if(arr[j] > arr[i]) {
                flag = true;
                break;
            }
        }

        if(!flag) record_days++;
    }

    cout << record_days << endl;
    return 0;
}