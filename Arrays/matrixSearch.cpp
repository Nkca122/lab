#include <bits/stdc++.h>
#define ll long long
const int M = 1e9 + 7;
using namespace std;

int32_t main()
{
    int r, c, key;
    cin >> r >> c >> key;
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    bool flag = false;
    int i = 0, j = c-1;
    while(i < r && j < c && i >= 0 && j >= 0){
        if(arr[i][j] == key){
            flag = true;
            break;
        } else if(arr[i][j] > key){
            j--;
        } else {
            i++;
        }
    }

    if(flag){
        cout << "Element found at: " << i << " " << j << endl;
    } else {
        cout << "Element Not Found" << endl;
    }

    return 0;
}