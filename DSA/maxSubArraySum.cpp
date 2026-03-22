#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class maxSubArraySum
{
private:
    /* data */
public:
    int maxSubArrSum(vector<int> &arr)
    {
        int arr_len = arr.size();
        int maxSum = INT_MIN;

        for (int i = 0; i < arr_len; i++)
        {
            for (int j = i; j < arr_len; j++)
            {
                int sum = 0;

                for (int k = i; k <= j; k++)
                {
                    sum += arr[k];
                }
                maxSum = max(maxSum, sum);
            }
        }
        return maxSum;
    }
    int maxSubArrSumBetter(vector<int> &arr)
    {
        int n = arr.size();
        int mid = 1;
        int maxSum = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            int sum = 0;
            for (int j = 0; j <= i; j++)
            {
                sum += arr[j];
            }
            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
    int optimalmaxSubarrSum(vector<int> &arr)
    {
        int n = arr.size();
        long long maxi = LONG_LONG_MIN;
        long long sum = 0;
        int s = 0;
        int e = 0;
        for (int i = 0; i < n; i++)
        {
            if (sum < 0)
                s = i;
            sum += arr[i];
            if (sum > maxi)
            {
                maxi = sum;
                e = i;
            }
            if (sum < 0)
            {
                sum = 0;
            }
        }
        cout << "s : " << s << " " << " e : " << e << endl;
        return maxi;
    }
};

int main()
{
    vector<int> arr1 = {2, 3, 5, -2, 7, -4};
    vector<int> arr2 = {-2, -3, -7, -2, -10, -4};
    maxSubArraySum ans;
    cout << ans.maxSubArrSum(arr1) << endl;
    cout << ans.maxSubArrSumBetter(arr1) << endl;
    cout << ans.optimalmaxSubarrSum(arr1) << endl;
}
