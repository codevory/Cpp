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
        int lp = 0;
        int rp = n - 1;

        while (lp <= rp)
        {
            if (arr[lp] > arr[rp])
            {
                int temp = arr[lp];
                arr[lp] = arr[rp];
                arr[rp] = temp;
            }
            // lp++;
            rp--;
        }
    }
};

int main()
{
    vector<int> arr = {1, 0, 1, 2, 0, 2, 3};
    Solution obj;
    // vector<int> ans = obj.sortArray(arr);
    obj.sortArrayBetter(arr);
    for (int x : arr)
    {
        cout << x << " ";
    }
}