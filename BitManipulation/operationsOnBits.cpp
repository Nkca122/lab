#include <bits/stdc++.h>
#define ll long long
const int M = 1e9 + 7;
using namespace std;

bool getBit(int n, int pos){
    int mask = 1 << pos;
    return (mask & n) != 0; 
}

void setBit(int &n, int pos){
    int mask = 1 << pos;
    n = n | mask;
}

void clearBit(int &n, int pos){
    int mask = ~(1 << pos);
    n = n & mask;
}

void setBit(int &n, int pos, int value){
    clearBit(n, pos);
    int mask = value << pos;
    n = n | mask;
}

int32_t main()
{
    
    return 0;
}