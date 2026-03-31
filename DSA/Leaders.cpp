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
};

int main()
{
    vector<int> arr1 = {1, 3, 2, 4, 5, 0, 2, 1};
    Solution sol;
    vector<int> ans = sol.LeadersInArray(arr1);
    for (int x : ans)
    {
        cout << x << " ";
    }
}