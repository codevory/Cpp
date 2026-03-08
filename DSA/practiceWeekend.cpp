#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    void secondSmallsecondLarge(vector<int> &arr)
    {
        int n = arr.size();
        int small = INT_MAX;
        int large = INT_MIN;
        int secondSmall = INT_MAX;
        int secondLarge = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > large) // check greater element than curent largest elm.
            {
                large = arr[i];
            }
            if (arr[i] > secondLarge && arr[i] != large)
            {
                secondLarge = arr[i];
            }
            else
            {
                if (arr[i] < small)
                {
                    small = arr[i];
                }
                if (arr[i] < secondSmall && arr[i] != small)
                {
                    secondSmall = arr[i];
                }
            }
        }
        cout << "SecondLargest : " << secondLarge << endl;
        cout << "SecondSmallest : " << secondSmall << endl;
    }
    bool isArraySorted(vector<int> &arr)
    {
        int n = arr.size();

        for (int i = 1; i < n; i++)
        {
            if (arr[i] < arr[i - 1])
            {
                return false;
            }
        }
        return true;
    }
    int removeDuplicates(vector<int> &arr)
    {
        int n = arr.size();
        int i = 0;
        /* {
            vector<int> ans;

            for (int i = 0; i < n - 1; i++)
            {
                if (arr[i] == arr[i + 1])
                {
                    arr[i] = 0;
                }
            }

            for (int i = 1; i < n; i++)
            {
                if (arr[i] != 0)
                {
                    ans.push_back(arr[i]);
                    arr[i - 1] = arr[i];
                }
            }
            return ans;
        } */

        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] != arr[j + 1])
            {
                i++;
            }
        }
        return i + 1;
    }
    vector<int> rotateArray(vector<int> &arr, int k)
    {
        int n = arr.size();
        vector<int> ans;
        int cnt = 0;

        for (int i = 0; i < n - k; i++)
        {
        }
        return arr;
    }
};

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> arr2 = {1, 2, 4, 7, 7, 5};
    vector<int> arr3 = {5, 4, 6, 7, 8};
    vector<int> arr4 = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5};
    vector<int> arr5 = {1, 2, 3, 4, 5, 6, 7};

    Solution ans;
    ans.secondSmallsecondLarge(arr2);
    cout << boolalpha << endl;
    cout << ans.isArraySorted(arr3) << endl;

    // vector<int> resp = ans.removeDuplicates(arr4);
    cout << ans.removeDuplicates(arr4) << endl;
    vector<int> res = ans.rotateArray(arr5, 2);
    for (int x : res)
    {
        cout << x << " ";
    }
}