#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    void merge(vector<int> &arr, int high, int low, int mid);
    void mergeSort(vector<int> &arr, int low, int high);
};

void Solution::merge(vector<int> &arr, int high, int low, int mid)
{
    vector<int> temp;

    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left++]);
        }
        else
        {
            temp.push_back(arr[right++]);
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left++]);
    }
    while (right <= high)
    {
        temp.push_back(arr[right++]);
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
        // cout << temp[i] << " ";
    }
}

void Solution::mergeSort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, high, low, mid);
}

int main()
{
    vector<int> arr = {1, 3, 2, 4, 7, 5};
    int mid = (0 + arr.size() - 1) / 2;
    int arr2[] = {5, 4, 3, 2, 1};
    vector<int> arr3 = {13, 46, 24, 52, 20, 9};
    int n = arr3.size();
    Solution obj;
    obj.mergeSort(arr, 0, arr.size() - 1);
    for (int val : arr)
    {
        cout << val << " ";
    }
}