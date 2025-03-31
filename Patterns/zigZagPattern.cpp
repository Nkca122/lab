#include <bits/stdc++.h>
#define ll long long
const int M = 1e9 + 7;
using namespace std;

int32_t main()
{
    int n; cin >> n;
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= n; j++){
            if(i%2 == 0){
                if(j%2 == 0){
                    cout << "*";
                } else { 
                    cout << " ";
                }
            } else {
                if((i+j)%4 == 0){
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
        }

        cout << endl;
    }
    return 0;
}