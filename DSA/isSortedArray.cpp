#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// problem : check if array is sorted in ascending order return true else return false;

class isSortedArray
{
private:
    /* data */
public:
    bool isSorted(vector<int> &arr);
};

bool isSortedArray::isSorted(vector<int> &arr)
{
    int n = arr.size();
    if (n == 1)
        return true;

    for (int i = 1; i < n; i++)
    {
        int sum = arr[i - 1] + 1;
        if (arr[i] < arr[i - 1] || arr[i] != sum)
            return false;
    }
    return true;
}

int main()
{
    vector<int> arr1 = {5, 4, 3, 2, 1};
    vector<int> arr2 = {1, 2, 3, 4, 5, 6, 7};
    vector<int> arr3 = {1, 2, 3, 4, 0, 6, 7, 8};
    isSortedArray ans;
    cout << ans.isSorted(arr1) << endl;
}
