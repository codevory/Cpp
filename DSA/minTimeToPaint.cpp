#include <iostream>
#include <vector>
using namespace std;

class Solution
{
private:
    bool isPossible(vector<int> &arr, int n, int m, int maxTime)
    {
        int time = 0, painters = 1;
        for (int i = 0; i < n; i++)
        {
            if (time + arr[i] <= maxTime)
            {
                time += arr[i];
            }
            else
            {
                time = arr[i];
                painters++;
            }
        }
        return painters <= m ? true : false;
    }

public:
    int minTimeToPaint(vector<int> &arr, int n, int m)
    {

        int sum = 0, maxValue = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            maxValue = max(maxValue, arr[i]);
        }
        int st = maxValue, end = sum, ans = -1;

        while (st <= end)
        {
            int mid = st + (end - st) / 2;
            if (isPossible(arr, n, m, mid))
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> arr = {40, 30, 10, 20};
    int n = 4, m = 2;

    Solution ans;
    cout << ans.minTimeToPaint(arr, n, m) << endl;
    return 0;
}