// Given an array, find the second smallest and second largest element in the array.
// Print ‘-1’ in the event that either of them doesn’t exist

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> smallestAndLargest(vector<int> &arr)
    {
        int highest = arr[0];
        int secHigh = arr[0];
        int low = arr[0];
        int secLow = arr[0];
        vector<int> ans(2, 0);
        ans.push_back(secHigh);
        ans.push_back(secLow);
        int n = arr.size();
        if (n == 1)
        {
            secHigh = -1;
            secLow = -1;
            return ans;
        }
        sort(arr.begin(), arr.end());
        if (arr[n - 1] == arr[n - 2])
        {
            secHigh = arr[n - 3];
        }
        else
        {
            secHigh = arr[n - 2];
        }
        if (arr[0] == arr[1])
        {
            secLow = arr[2];
        }
        else
        {
            secLow = arr[1];
        }
        cout << "SecLow : " << secLow << endl;
        cout << "SecHigh : " << secHigh << endl;
        return ans;
    }
};

int main()
{
    vector<int> arr = {1, 2, 4, 7, 7, 5};
    vector<int> arr2 = {3, 3, 4, 8, 7, 9, 11, 13, 13};
    Solution obj;
    vector<int> out = obj.smallestAndLargest(arr2);
    /* for (int x : out)
     {
        cout << x << " ";
     } */
}