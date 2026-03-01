#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    int largestElm(int arr[], int n)
    {
        // int n = sizeof(arr) / sizeof(arr[0]);
        int highest = INT_MIN;
        if (n == 1)
            return arr[0];
        // brute force
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > highest)
            {
                highest = arr[i];
            }
        }
        return highest;
    }
};

int main()
{
    int arr[] = {2, 5, 1, 3, 0};
    int arr2[] = {8, 10, 5, 7, 9};
    int n = sizeof(arr2) / sizeof(arr2[0]);
    Solution obj;
    cout << obj.largestElm(arr2, n) << " ";
}