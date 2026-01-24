#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
private:
    bool isValid(vector<int> &arr, int n, int m, int maxPages)
    {
        int stud = 1, pages = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > maxPages)
            {
                return false;
            }
            else if (pages + arr[i] <= maxPages)
            {
                pages += arr[i];
            }
            else
            {
                stud++;
                pages = arr[i];
            }
        }
        return stud > m ? false : true;
    };

public:
    int findPages(vector<int> &arr, int n, int m)
    {
        if (m > n)
        {
            return -1;
        }
        int ans = -1, sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        };
        int end = sum, st = 0;
        // function for getting valid pages

        // while
        while (st <= end)
        {
            int mid = st + (end - st) / 2;
            if (isValid(arr, n, m, mid))
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
    Solution obj;
    vector<int> arr = {12, 34, 67, 90};
    int n = 4, m = 2;
    cout << obj.findPages(arr, n, m);
    return 0;
}
