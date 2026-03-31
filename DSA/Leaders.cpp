#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> LeadersInArray(vector<int> &nums)
    {
        vector<int> ans;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            bool leader = true;
            for (int j = i + 1; j < n; j++)
            {
                if (nums[j] >= nums[i])
                {
                    leader = false;
                    break;
                }
            }
            if (leader)
            {
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
    vector<int> LeadersInArrayOptimal(vector<int> &nums)
    {
        vector<int> ans;
        int n = nums.size();
        int maxElement = nums[n - 1];
        for (int i = n - 1; i >= 0; i--)
        {
            if (nums[i] >= maxElement)
            {
                maxElement = nums[i];
                ans.push_back(maxElement);
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    vector<int> arr1 = {1, 3, 2, 4, 5, 0, 2, 1}, arr2 = {1, 2, 5, 3, 1, 2}, arr3 = {-3, 4, 5, 1, -4, -5};
    Solution sol;
    vector<int> ans = sol.LeadersInArrayOptimal(arr3);
    for (int x : ans)
    {
        cout << x << " ";
    }
}