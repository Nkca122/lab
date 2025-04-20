#include <bits/stdc++.h>
using namespace std;

struct Item {
    float weight, value;
    Item(float w, float v) : weight(w), value(v) {}
};

// Comparator to sort items by value per unit weight
bool comparator(Item a, Item b) {
    return a.value / a.weight > b.value / b.weight;
}

float fractional_knapsack(float capacity, vector<Item> items) {
    sort(items.begin(), items.end(), comparator);
    float total_value = 0;

    for (auto& item : items) {
        if (capacity == 0)
            break;

        if (item.weight <= capacity) {
            total_value += item.value;
            capacity -= item.weight;
        } else {
            total_value += item.value * (capacity / item.weight);
            capacity = 0;
        }
    }

    return total_value;
}

int main() {
    vector<Item> items = {
        Item(10, 60),
        Item(20, 100),
        Item(30, 120)
    };
    float capacity = 50;

    float max_value = fractional_knapsack(capacity, items);
    cout << "Maximum value in knapsack: " << fixed << setprecision(2) << max_value << endl;

    return 0;
}
