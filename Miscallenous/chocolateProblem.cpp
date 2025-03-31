#include <bits/stdc++.h>
#define ll long long
const int M = 1e9 + 7;
using namespace std;

int32_t main()
{
    int rupees, wrappers = 0, curr_chocolates = 0, total_chocolates = 0;
    cin >> rupees;
    while(wrappers >= 3 || rupees > 0){
        curr_chocolates = rupees + (wrappers/3);
        rupees = 0;
        wrappers = (wrappers%3) + curr_chocolates;
        total_chocolates += curr_chocolates;
    }

    cout << total_chocolates;
    return 0;
}