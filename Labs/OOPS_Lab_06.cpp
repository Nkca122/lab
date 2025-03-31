#include <iostream>
using namespace std;

class DynamicArray
{
private:
    int *arr;
    int size;
    int capacity;

    void resize()
    {
        capacity *= 2;
        int *newArr = new int[capacity];
        for (int i = 0; i < size; i++)
        {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
    }

public:
    DynamicArray(int cap = 2)
    {
        size = 0;
        capacity = cap;
        arr = new int[capacity];
    }
    ~DynamicArray()
    {
        delete[] arr;
    }
    void push_back(int value)
    {
        if (size == capacity)
        {
            resize();
        }
        arr[size++] = value;
    }
    void pop_back()
    {
        if (size > 0)
        {
            size--;
        }
    }
    int get(int index)
    {
        if (index >= 0 && index < size)
        {
            return arr[index];
        }
        throw out_of_range("Index out of range");
    }
    int getSize()
    {
        return size;
    }
    void displayValues()
    {
        cout << "Array elements: ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    DynamicArray dArray;
    dArray.push_back(10);
    dArray.push_back(20);
    dArray.push_back(30);
    dArray.displayValues();
    dArray.pop_back();
    dArray.displayValues();
    return 0;
}
