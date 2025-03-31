#include <bits/stdc++.h>
#define ll long long
const int M = 1e9 + 7;
using namespace std;
bool getBit(int n, int pos){
    int mask = 1 << pos;
    return (n & mask) != 0;
}
int32_t main()
{
    int n; cin >> n; bool flag_one = false, flag = true;
    while(n){
        int lsb = getBit(n, 0);
        if(lsb == 0) continue;
        else if(lsb == 1) {
            if(!flag_one) flag_one = true;
            else if(flag_one){
                cout << "Not a power of 2" << endl;
                flag = false;
                break;
            }
        }

        n = n >> 1;
    }

    if(flag) cout << "Power of 2" << endl;
}