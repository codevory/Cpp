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
    int removeDup(vector<int> &nums)
    {
        int n = nums.size();
        int i = 0;
        for (int j = 1; j < n; j++)
        {
            if (nums[j] != nums[i])
            {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 4, 5, 5, 6, 7};
    Solution obj;
    // vector<int> ans = obj.removeDuplicates(arr1);
    cout << obj.removeDup(arr1) << endl;
}