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
                    currSum += arr[i];
                }

                if (currSum == k)
                {
                    maxLength = max(maxLength, j - i + 1);
                }
            }
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
}