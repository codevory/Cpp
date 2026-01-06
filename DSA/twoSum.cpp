#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.

// Example 1:
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

// class Solution
// {
// public:
//     vector<int> twoSum(vector<int> &nums, int target)
//     {
//         unordered_map<int, int> mp;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             int remaining = target - nums[i];
//             if (mp.find(remaining) != mp.end())
//             {
//                 return {mp[remaining], i};
//             }
//             mp[nums[i]] = i;
//         }
//         return {};
//     }
// };

int main()
{
    int nums[5] = {1, 2, -3, 4, 5};
    int length = sizeof(nums) / sizeof(nums[0]);
    int currSum = 0, maxSum = INT_MIN;
    for (const auto &val : nums)
    {
        currSum += val;
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
            currSum = 0;
    }
    cout << maxSum;
}