#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    vector<int> removeDuplicates(vector<int> &arr)
    {
        int n = arr.size();
        unordered_set<int> seen;
        vector<int> ans;
        int index = 0;
        for (int x : arr)
        {
            if (seen.find(x) == seen.end())
            {
                seen.insert(x);
                ans.push_back(x);
                arr[index] = x;
                index++;
            }
        }
        return ans;
    }
    void rotateByOne(vector<int> &nums)
    {
        int n = nums.size();
        int lp = nums[0];
        int rp = nums[n - 1];
        nums[0] = rp;
        nums[n - 1] = lp;
    }
};

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 4, 5, 5, 6, 7};
    vector<int> arr2 = {1, 2, 3, 4, 5};
    Solution obj;
    // vector<int> ans = obj.removeDuplicates(arr1);
    obj.rotateByOne(arr2);
    for (int x : arr2)
    {
        cout << x << " ";
    }
}