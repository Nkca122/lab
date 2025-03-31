#include <bits/stdc++.h>
#define ll long long
const int M = 1e9 + 7;
using namespace std;

int32_t main()
{
    string str; cin >> str;
    sort(str.begin(), str.end(), greater<int>());
    cout << str << endl;
    return 0;
}