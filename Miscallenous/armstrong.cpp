#include <bits/stdc++.h>
#define ll long long
const int M = 1e9 + 7;
using namespace std;

int32_t main()
{
    int n, test_n = 0, len = 0, ncpy; 
    cin >> n; 
    ncpy = n;

    while(n > 0){
        len++; n/=10;
    }


    n = ncpy;

    while(n > 0){
        test_n = test_n + round(pow((n%10),len));
        n/=10;
    }
    
    if(ncpy == test_n){
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}