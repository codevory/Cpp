#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution
{
public:
    int longestSubarrWithSum0(vector<int> &arr)
    {
        unordered_map<int, int> mp;
        int n = arr.size();
        int sum = 0;
        int maxLen = 0;

        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            if (sum == 0)
            {
                maxLen = i + 1;
            }
            else if (mp.find(sum) != mp.end())
            {
                maxLen = max(maxLen, i - mp[sum]);
            }
            else
            {
                mp[sum] = i;
            }
        }
        return maxLen;
    }
};

int main()
{
    vector<int> arr = {9, -3, 3, -1, 6, -5};
    Solution ans;
    cout << "Sum : " << ans.longestSubarrWithSum0(arr) << endl;
}