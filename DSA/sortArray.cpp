#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> sortArray(vector<int> &arr)
    {
        int n = arr.size();

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        return arr;
    }
    void sortArrayBetter(vector<int> &arr)
    {
        int n = arr.size();
        int cnt0 = 0;
        int cnt1 = 0;
        int cnt2 = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
                cnt0++;
            else if (arr[i] == 1)
                cnt1++;
            else
                cnt2++;
        }
        for (int i = 0; i < cnt0; i++)
        {
            arr[i] = 0;
        }
        for (int i = cnt0; i < cnt1 + cnt0; i++)
        {
            arr[i] = 1;
        }
        for (int i = cnt0 + cnt1; i < n; i++)
        {
            arr[i] = 2;
        }
    }
    void sortArrayOptimal(vector<int> &arr)
    {
        int low = 0;
        int mid = 0;
        int high = arr.size() - 1;

        while (mid <= high)
        {
            if (arr[mid] == 0)
            {
                swap(arr[mid], arr[low]);
                mid++;
                low++;
            }
            else if (arr[mid] == 1)
                mid++;
            else
            {
                swap(arr[mid], arr[high]);
                high--;
            }
        }
    }
};

int main()
{
    vector<int> arr = {1, 0, 1, 2, 0, 2, 1};
    Solution obj;
    // vector<int> ans = obj.sortArray(arr);
    // obj.sortArrayBetter(arr);
    obj.sortArrayOptimal(arr);
    for (int x : arr)
    {
        cout << x << " ";
    }
}