#include <iostream>
using namespace std;

class Cart
{
private:
    string items[10];
    int costs[10];
    int quantities[10];

    int ct = 0;

public:
    void add(string item, int cost, int qty)
    {
        if (ct < 10)
        {
            items[ct] = item;
            costs[ct] = cost;

            quantities[ct++] = qty;
        }
        else
            cout << "Cart is Full" << endl;
    }

    void bill()
    {
        cout << "Item |\t" << "Cost |\t" << "Qty\n";
        int total_cost = 0;
        for (int i = 0; i < ct; i++)
        {
            cout << items[i] << "\t" << costs[i] << "\t" << quantities[i] << endl;
            total_cost += quantities[i] * costs[i];
        }

        cout << "Total Cost: \t" << total_cost << endl;

    }
};

int main(){
    Cart c;
    for(int i = 0; i < 5; i++){
        string item; int cost, qty;
        cin >> item >> cost >> qty;
        c.add(item, cost, qty);
    }

    c.bill();
};