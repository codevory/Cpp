#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &arr)
    {
        int n = arr.size();
        int maxProfit = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int profit = arr[j] - arr[i];
                maxProfit = max(maxProfit, profit);
            }
        }
        return maxProfit;
    }
    int maxProfitOptimal(vector<int> &arr)
    {
        int n = arr.size();
        int maxProf = 0;
        int minPrice = INT_MAX;

        for (int price : arr)
        {
            if (price < minPrice)
            {
                minPrice = price;
            }
            else
            {
                maxProf = max(maxProf, price - minPrice);
            }
        }
        return maxProf;
    }
};

int main()
{
    vector<int> arr1 = {10, 7, 5, 8, 11, 9}, arr3 = {7, 1, 5, 3, 6, 4}, arr4 = {2, 5, 3, 1};
    vector<int> arr2 = {5, 4, 3, 2, 1};

    Solution ans;
    cout << ans.maxProfit(arr1) << endl;
    cout << ans.maxProfitOptimal(arr2) << endl;
    cout << ans.maxProfit(arr3) << endl;
    cout << ans.maxProfit(arr4) << endl;
    cout << ans.maxProfitOptimal(arr1) << endl;
}