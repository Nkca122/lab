#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;

class RandomCards{
    public:
        void draw();
};

void RandomCards::draw() {
    int deck[52]; string suits[] = {"Spades", "Hearts", "Diamonds", "Clubs"}, ranks[] = {"Ace","2","3","4","5","6","7","8","9","10","Jack","Queen","King"};
    for (int i = 0; i < 52; i++) deck[i] = i;
    srand(time(0)); random_shuffle(deck, deck + 52);
    for (int i = 0; i < 4; i++)
        cout << "Card " << i+1 << ": " << ranks[deck[i]%13] << " of " << suits[deck[i]/13] << endl;
}

int main(){
    RandomCards R;
    R.draw();
}
