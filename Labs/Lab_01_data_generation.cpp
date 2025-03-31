#include <bits/stdc++.h>
#define ll long long
const int M = 1e9 + 7;
const int LEN = 100000;
using namespace std;

void createFile(string address, string mode, int size = LEN){
    ofstream f;
    f.open(address, ios_base::out);
    if(!f.is_open()){
        cerr << "File Could Not Be Created";
        return;
    }

    if(mode == "best"){
        for(int i = 1; i <= size; i++){
            f << i << " ";
        }
    } else if (mode == "average") {
        for(int i = 1; i <= size; i++){
            f << rand()%500 + 1 << " ";
        }
    } else if (mode == "worst"){
        for(int i = size; i > 0; i--){
            f << i << " ";
        }
    } else {
        cout << "NOT VALID MODE" << endl;
    }
}

int32_t main()
{
    createFile("./average.txt", "average");
    createFile("./worst.txt", "worst");
    createFile("./best.txt", "best");
    return 0;
}