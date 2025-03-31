#include <bits/stdc++.h>
#define ll long long
const int M = 1e9 + 7;
using namespace std;

int32_t main()
{
    int n, key; cin >> n; int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cin >> key;

    for(int i = 0; i < n; i++){
        int sum = 0;
            for(int j = i; j < n; j++){
               sum += arr[j];
                if(sum == key){
                    cout << i << " " << j << endl;
                    break;
                }
            }
    }
    return 0;
}