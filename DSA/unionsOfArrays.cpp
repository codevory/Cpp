#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

class Solution
{
public:
    vector<int> unionsOfArr(vector<int> &arr1, vector<int> &arr2, int n, int m)
    {
        map<int, int> freq;
        vector<int> unions;
        for (int i = 0; i < n; i++)
        {
            freq[arr1[i]++];
        }

        for (int j = 0; j < m; j++)
        {
            freq[arr2[j]++];
        }

        for (auto x : freq)
        {
            unions.push_back(x.first);
        }
        return unions;
    }
};

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {2, 3, 4, 4, 5};
    vector<int> arr3 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> arr4 = {2, 3, 4, 4, 5, 11, 12};

    Solution ans;
    vector<int> output = ans.unionsOfArr(arr3, arr4, 10, 7);
    for (int x : output)
    {
        cout << x << " ";
    }
}