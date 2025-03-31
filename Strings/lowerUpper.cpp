#include <bits/stdc++.h>
#define ll long long
const int M = 1e9 + 7;
using namespace std;

int32_t main()
{
    string str; 
    getline(cin , str);

    string mode; cin >> mode;
    if(!mode.compare("lower")){
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    } else if(!mode.compare("upper")){
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    }

    cout << str << endl;
    return 0;
}