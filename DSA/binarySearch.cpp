#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int findTarget(vector<int> &nums, int target)
{
    int st = 0;
    int end = nums.size() - 1;
    sort(nums.begin(), nums.end());
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (target > nums[mid])
        {
            st = mid + 1;
        }
        else if (target < nums[mid])
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
};

int BSR(vector<int> arr, int st, int end, int tar)
{
    if (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (tar < arr[mid])
        {
            return BSR(arr, st, end = mid - 1, tar);
        }
        if (tar > arr[mid])
        {
            return BSR(arr, st = mid + 1, end, tar);
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {1, 2, 3, 5, 4, 7, 6, 8, 12, 11, 10, 9};
    vector<int> arr2 = {-1, 0, 3, 4, 5, 7, 9, 12};
    int st = 0;
    int end = arr.size() - 1;
    cout << BSR(arr, st, end, 17) << endl;
    // cout << sizeof(arr) << endl;
    return 0;
}