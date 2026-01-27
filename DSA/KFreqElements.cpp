// 347. Top K Frequent Elements
// Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

// Input: nums = [1,1,1,2,2,3], k = 2
// Output: [1,2]

// Input: nums = [1], k = 1
// Output: [1]

// Input: nums = [1,2,1,2,1,2,3,1,3,2], k = 2
// Output: [1,2]

#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> count;
        for (int val : nums)
        {
            count[val]++;
        }

        vector<pair<int, int>> arr;
        for (auto p : count)
        {
            arr.push_back({p.second, p.first});
        }
        sort(arr.rbegin(), arr.rend());
        vector<int> ans;
        for (int i = 0; i < k; i++)
        {
            ans.push_back(arr[i].second);
        }
        return ans;
    }
};

int main()
{
    vector<int> nums = {1, 2, 1, 2, 1, 2, 3, 1, 3, 2};
    vector<int> arr2 = {1};
    int k = 1;
    Solution obj;
    vector<int> result = obj.topKFrequent(arr2, k);

    cout << "[";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
        if (i < result.size() - 1)
            cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}