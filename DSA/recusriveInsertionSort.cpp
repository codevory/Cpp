#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    void insertionSort(int arr[], int i, int n)
    {
        if (i == n)
            return;
        int j = i;

        while (j > 0 && arr[j] < arr[j - 1])
        {
            if (arr[j - 1] > arr[j])
            {
                swap(arr[j], arr[j - 1]);
            }
            j--;
        }
        insertionSort(arr, i + 1, n);
    }
};

int main()
{
    int arr[] = {9, 8, 7, 6, 3, 10, 5, 1};
    int arr2[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr2) / sizeof(arr2[0]);
    Solution ans;
    ans.insertionSort(arr2, 0, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
}