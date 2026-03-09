#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int longestSubArraySum(vector<int> &arr, int k)
    {
        int n = arr.size();
        int maxLength = 0;

        for (int i = 0; i < n; i++)
        {

            for (int j = i; j < n; j++)
            {
                int currSum = 0;

                for (int k = i; k <= j; k++)
                {
                    currSum += arr[k];
                }

                if (currSum == k)
                {
                    maxLength = max(maxLength, j - i + 1);
                }
            }
        }
        return maxLength;
    }
    int longestSubArrOptimal(vector<int> &arr, int k)
    {
        int n = arr.size();
        int lp = 0;
        int rp = 0;
        int maxLength = 0;
        int sum = arr[0];

        while (rp < n)
        {

            while (lp <= rp && sum > k)
            {
                sum -= arr[lp];
                lp++;
            }
            if (sum == k)
            {
                maxLength = max(maxLength, rp - lp + 1);
            }
            rp++;
            if (rp < n)
                sum += arr[rp];
        }
        return maxLength;
    }
};

int main()
{
    vector<int> arr = {10, 5, 2, 7, 1, 9};
    int k = 15;
    Solution ans;
    cout << ans.longestSubArraySum(arr, k) << endl;
    cout << ans.longestSubArrOptimal(arr, k) << endl;
}