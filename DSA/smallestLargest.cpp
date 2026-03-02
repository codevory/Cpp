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
        int secHigh = arr[0];
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
    vector<int> optimSmallestAndLargest(vector<int> &arr)
    {
        int highest = INT_MIN;
        int second_Max = INT_MIN;
        int lowest = INT_MAX;
        int second_Min = INT_MAX;
        int n = arr.size();
        vector<int> ans;

        // find lowest & highest
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < lowest)
            {
                lowest = arr[i];
            }
            if (arr[i] > highest)
            {
                highest = arr[i];
            }
        }

        // find secondLowest & secondHighest
        for (int j = 0; j < n; j++)
        {
            // second_lowest
            if (arr[j] < second_Min && arr[j] != lowest)
            {
                second_Min = arr[j];
            }

            // second_highest
            if (arr[j] > second_Max && arr[j] != highest)
            {
                second_Max = max(arr[j], second_Max);
            }
        }
        cout << highest << " " << lowest << " " << endl;
        ans.push_back(second_Min);
        ans.push_back(second_Max);
        return ans;
    }
};

int main()
{
    vector<int> arr = {1, 2, 4, 7, 7, 5};
    vector<int> arr2 = {3, 3, 4, 8, 7, 9, 11, 13, 13};
    Solution obj;
    // vector<int> out = obj.smallestAndLargest(arr2);
    vector<int> out = obj.optimSmallestAndLargest(arr);
    for (int x : out)
    {
        cout << x << " ";
    }
}