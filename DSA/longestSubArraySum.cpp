#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxLenOptimal(vector<int> &arr)
    {
        int n = arr.size();
        int maxLength = 0;
        unordered_map<int, int> mp;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            if (sum == 0)
            {
                maxLength = (int)i + 1;
            }
            else if (mp.find(sum) != mp.end())
            {
                maxLength = max(maxLength, i - mp[sum]);
            }
            else
            {
                mp[sum] = i;
            }
        }
        return maxLength;
    }
    int maxLenBrute(vector<int> &arr)
    {
        int sum = 0;
        int maxi = 0;
        unordered_map<int, int> mp;

        for (int i = 1; i < arr.size(); i++)
        {
            for (int j = 0; j <= i; j++)
            {
                sum += arr[j];
                if (sum == 0)
                {
                    maxi = j + 1;
                }
                else if (mp.find(sum) != mp.end())
                {
                    maxi = max(maxi, j - mp[sum]);
                }
                else
                {
                    mp[sum] = j;
                }
            }
        }
        return maxi;
    }
};

int main()
{
    Solution ans;
    vector arr1 = {15, -2, 2, -8, 1, 7, 10, 23}, arr2 = {2, 10, 4};
    cout << ans.maxLenOptimal(arr1) << endl;
    cout << ans.maxLenBrute(arr1);
}