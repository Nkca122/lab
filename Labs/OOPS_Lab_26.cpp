#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

class CSVProcessor {
public:
    void showTopStudents(const std::string &filename);
};

void CSVProcessor::showTopStudents(const string &filename) {
    ifstream file(filename, ios_base::in); string line;
    bool ignoreHeading = false;
    while (getline(file, line)) {
        if(!ignoreHeading){
            ignoreHeading = true;
            continue;
        }
        stringstream ss(line); string name, temp; float sum = 0;
        getline(ss, name, ',');
        for (int i = 0; i < 3; i++) { getline(ss, temp, ','); sum += stof(temp); }
        float avg = sum / 3; 
        if (avg >= 75) cout << name << " - Avg: " << avg << endl;
    }
}

int main(){
    CSVProcessor C;
    C.showTopStudents("marks.txt");
}

