#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

class Solution
{
private:
    bool isPossible(vector<int> &arr, int n, int c, int mid)
    {
        int cows = 1;
        int lastStall = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (arr[i] - lastStall >= mid)
            {
                cows++;
                lastStall = arr[i];
            }
            if (cows == c)
                return true;
        }
        return false;
    };

public:
    int minLargestDist(vector<int> &arr, int n, int c)
    {
        sort(arr.begin(), arr.end());
        int st = 1, end = arr[n - 1] - arr[0];
        int dist = -1;
        while (st <= end)
        {
            int mid = st + (end - st) / 2;
            if (isPossible(arr, n, c, mid))
            {
                dist = mid;
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return dist;
    }
};

int main()
{
    vector<int> arr = {1, 2, 8, 4, 9}; // these are positions of cows in stall within barn
    int N = 5, C = 3;                  // N denotes number of stalls , C denotes number of cows
    Solution obj;

    cout << obj.minLargestDist(arr, N, C) << endl;
    return 0;
}