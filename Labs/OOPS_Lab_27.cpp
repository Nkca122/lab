#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

class RecentUsers
{
public:
    void showRecent(const std::string &filename);
};

void RecentUsers::showRecent(const string &filename)
{
    struct Log
    {
        string user, time;
    };
    vector<Log> logs;
    ifstream file(filename, ios_base::in);
    string line;
    while (getline(file, line))
    {
        stringstream ss(line);
        string u, t;
        ss >> u >> t;
        logs.push_back({u, t});
    }
    sort(logs.begin(), logs.end(), [](Log &a, Log &b)
         { return a.time > b.time; });
    vector<string> seen;
    for (auto &l : logs)
        if (find(seen.begin(), seen.end(), l.user) == seen.end() && seen.size() < 5)
            seen.push_back(l.user);
    for (auto &u : seen)
        cout << u << endl;
}

int main(){
    RecentUsers R;
    R.showRecent("log.txt");
}
