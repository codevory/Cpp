
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> nextPermut(vector<int> &arr)
    {

        vector<vector<int>> all;
        sort(arr.begin(), arr.end());
        do
        {
            all.push_back(arr);
        } while (next_permutation(arr.begin(), arr.end()));

        for (int i = 0; i < all.size(); i++)
        {
            if (all[i] == arr)
            {
                if (i == all.size() - 1)
                {
                    return all[0];
                }
                return all[i + 1];
            }
        }
        return arr;
    };
    void nextPermutOptimal(vector<int> &arr)
    {
        int index = -1;
        for (int i = arr.size() - 2; i >= 0; i--)
        {
            if (arr[i] < arr[i + 1])
            {
                index = i;
                break;
            }
        }

        if (index == -1)
        {
            reverse(arr.begin(), arr.end());
            return;
        }

        for (int i = arr.size() - 1; i > index; i--)
        {
            if (arr[i] > arr[index])
            {
                swap(arr[i], arr[index]);
                break;
            }
        }
        reverse(arr.begin() + index + 1, arr.end());
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {1, 2, 3};

    cout << " " << endl;
    sol.nextPermutOptimal(nums);
    for (int x : nums)
    {
        cout << x << " ";
    }
}