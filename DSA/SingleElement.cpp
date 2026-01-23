// 540. Single Element in a Sorted Array
//  You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

// Return the single element that appears only once.

// Your solution must run in O(log n) time and O(1) space.

// Example 1:

// Input: nums = [1,1,2,3,3,4,4,8,8]
// Output: 2
// Example 2:

// Input: nums = [3,3,7,7,10,11,11]
// Output: 10

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{ // time complexity - O(logN) -> BS
public:
    int uniqueElement(vector<int> &arr)
    {
        int n = arr.size();
        int st = 0;
        int end = n - 1;
        if (n == 1)
            return arr[0];
        while (st <= end)
        {
            int mid = st + (end - st) / 2;
            // edge cases
            if (mid == 0 && arr[mid] != arr[1])
                return arr[mid];
            if (mid == n - 1 && arr[n - 1] != arr[n - 2])
                return arr[mid];
            if (arr[mid] != arr[mid + 1] && arr[mid] != arr[mid - 1])
                return arr[mid];

            if (mid % 2 == 0)
            { // arr is even
                if (arr[mid] == arr[mid - 1])
                {
                    end = mid - 1;
                }
                else
                {
                    st = mid + 1;
                }
            }
            else
            { // odd case
                if (arr[mid] == arr[mid - 1])
                {
                    st = mid + 1;
                }
                else
                {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};

int main()
{
    Solution ans;
    vector<int> arr = {3, 3, 7, 7, 10, 11, 11};
    vector<int> arr2 = {1, 1, 2, 3, 3, 4, 4, 8, 8};
    vector<int> arr3 = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    cout << ans.uniqueElement(arr) << endl;
    cout << "output arr 1 -> : 10 " << endl;
    cout << "output arr 2 -> : 2 " << endl;
    cout << ans.uniqueElement(arr2) << endl;
    cout << ans.uniqueElement(arr3) << endl;
    return 0;
}