#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> sortArray(vector<int> arr, int n);
};

vector<int> Solution::sortArray(vector<int> arr, int n)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        ans.push_back(arr[i]);
    }

    for (int i = 1; i < n; i++)
    {
        int key = ans[i];
        int j = i - 1;

        while (j >= 0 && key < ans[j])
        {
            ans[j + 1] = ans[j];
            j--;
        }
        ans[j + 1] = key;
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 3, 2, 4, 7, 5};
    int arr2[] = {5, 4, 3, 2, 1};
    vector<int> arr3 = {13, 46, 24, 52, 20, 9};
    int n = arr3.size();
    Solution obj;
    vector<int> arr4 = obj.sortArray(arr3, n);
    for (int val : arr4)
    {
        cout << val << " ";
    }
}