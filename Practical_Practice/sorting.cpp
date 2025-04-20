#include <bits/stdc++.h>
using namespace std;

void bubble_sort(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size() - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void merge_sort(vector<int> &arr)
{
    if (arr.size() > 1)
    {
        int mid = arr.size() / 2;
        vector<int> left_half, right_half;

        for (int i = 0; i < mid; i++)
            left_half.push_back(arr[i]);
        for (int i = mid; i < arr.size(); i++)
            right_half.push_back(arr[i]);

        merge_sort(left_half);
        merge_sort(right_half);

        int i = 0, j = 0, k = 0;
        while (i < left_half.size() && j < right_half.size())
        {
            if (left_half[i] < right_half[j])
            {
                arr[k] = left_half[i];
                i++;
            }
            else
            {
                arr[k] = right_half[j];
                j++;
            }
            k++;
        }

        while (i < left_half.size())
        {
            arr[k] = left_half[i];
            i++;
            k++;
        }

        while (j < right_half.size())
        {
            arr[k] = right_half[j];
            j++;
            k++;
        }
    }
    return;
}

void selection_sort(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        swap(arr[i], arr[min_idx]);
    }
}

void insertion_sort(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        int key = arr[i], j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quick_sort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

void counting(vector<int>& arr, int exp){
    vector<int> output(arr.size(), 0);
    vector<int> count(10, 0);

    for(auto& num: arr){
        int index = (num/exp)%10;
        count[index] += 1;
    }

    for(int i = 1; i < 10; i++){
        count[i] += count[i-1];
    }

    int i = arr.size() - 1;
    while(i >= 0){
        int index = (arr[i]/exp) % 10;
        output[count[index] - 1] = arr[i];
        count[index]--; i--; 
    }

    for(int i = 0; i < arr.size(); i++){
        arr[i] = output[i];
    }
}

void radix_sort(vector<int>& arr){
    int max_num = 0;
    for(auto& val: arr) if(val > max_num) max_num = val;

    int exp = 1;
    while(max_num/exp > 0){
        counting(arr, exp);
        exp *= 10;
    }
}

void heapify(vector<int>& arr, int n, int i){
    int largest = i, left  = 2*i + 1, right = 2*i + 2;
    if(left < n && arr[left] > arr[largest]) largest = left;
    if(right < n &&  arr[right] > arr[largest]) largest = right;

    if(largest != i){
        swap(arr[largest], arr[i]);
        heapify(arr, n , largest);
    }   
}

void heap_sort(vector<int>& arr){
 for(int i = arr.size()/2 - 1; i >= 0; i--){
    heapify(arr, arr.size(), i);
 }

 for(int i = arr.size() - 1; i > 0; i--){
    swap(arr[i], arr[0]);
    heapify(arr, i, 0);
 }
}

int main()
{
    vector<int> arr = {34, 25, 89, 12, 90};
    bubble_sort(arr);

    for (auto &el : arr)
    {
        cout << el << " ";
    }
    cout << endl;

    vector<int> brr = {34, 25, 89, 12, 90};
    merge_sort(brr);
    for (auto &el : brr)
    {
        cout << el << " ";
    }
    cout << endl;

    vector<int> crr = {34, 25, 89, 12, 90};
    selection_sort(crr);
    for (auto &el : crr)
    {
        cout << el << " ";
    }
    cout << endl;

    vector<int> drr = {34, 25, 89, 12, 90};
    insertion_sort(drr);
    for (auto &el : drr)
    {
        cout << el << " ";
    }
    cout << endl;

    vector<int> err = {34, 25, 89, 12, 90};
    quick_sort(err, 0, err.size()-1);
    for (auto &el : err)
    {
        cout << el << " ";
    }
    cout << endl;

    vector<int> frr = {34, 25, 89, 12, 90};
    radix_sort(frr);
    for (auto &el : frr)
    {
        cout << el << " ";
    }
    cout << endl;

    vector<int> grr = {34, 25, 89, 12, 90};
    heap_sort(grr);
    for (auto &el : grr)
    {
        cout << el << " ";
    }
    cout << endl;
}