#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    void sortArray(int arr[], int n);
};

void Solution::sortArray(int arr[], int n)
{
    // O(N) - time complexity
    for (int i = 0; i < n; i++)
    {
        int didSwap = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
        }
        if (didSwap == 0)
        {
            break;
        }
    }
}

int main()
{
    int arr[] = {1, 3, 2, 4, 7, 5};
    int arr2[] = {5, 4, 3, 2, 1};
    int arr3[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr3) / sizeof(arr3[0]);
    Solution obj;
    obj.sortArray(arr3, n);
    for (int val : arr3)
    {
        cout << val << " ";
    }
}