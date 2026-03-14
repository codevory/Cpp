#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &arr, int tar)
    {
        int n = arr.size();
        vector<int> indices;
        if (n == 1)
            return vector<int>(arr[0]);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i] + arr[j] == tar)
                {
                    indices.push_back(i);
                    indices.push_back(j);
                    return indices;
                }
            }
        }
        return indices;
    }
    vector<int> betterTwoSum(vector<int> &arr, int tar)
    {
        int n = arr.size();
        if (n == 1)
            return vector<int>(arr[0]);
        vector<int> ans(2, 0);
        int lp = 0;
        int rp = n - 1;
        unordered_map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            int rem = tar - arr[i];
            if (mp.find(rem) != mp.end())
            {
                return {mp[rem], i};
            }
            mp[arr[i]] = i;
        }
        return {-1, -1};
    }
    vector<int> optimalTwoSum(vector<int> &arr, int tar)
    {
        int n = arr.size();
        vector<pair<int, int>> numsWithIndex;
        for (int i = 0; i < n; i++)
        {
            numsWithIndex.push_back({arr[i], i});
        }

        int lp = 0;
        int rp = n - 1;
        sort(numsWithIndex.begin(), numsWithIndex.end());

        while (lp <= rp)
        {
            int sum = numsWithIndex[lp].first + numsWithIndex[rp].first;
            if (sum == tar)
            {
                return {numsWithIndex[lp].second, numsWithIndex[rp].second};
            }
            else if (sum < tar)
                lp++;
            else
            {
                rp--;
            }
        }
        return {-1, -1};
    }
};

int main()
{
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    Solution obj;
    vector<int> ans = obj.optimalTwoSum(arr, target);
    for (int x : ans)
    {
        cout << x << " ";
    }
}