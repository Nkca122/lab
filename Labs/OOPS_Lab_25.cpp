#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class LetterCounter
{
public:
    void count();
};

void LetterCounter::count()
{
    char letters[100];
    int counts[26] = {0};
    srand(time(0));
    for (int i = 0; i < 100; i++)
    {
        letters[i] = 'a' + rand() % 26;
        counts[letters[i] - 'a']++;
    }
    cout << "\n\nLetter frequencies:\n";
    for (int i = 0; i < 26; i++)
        cout << char('a' + i) << ": " << counts[i] << endl;
}

int main()
{
    LetterCounter L;
    L.count();
}