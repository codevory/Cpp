#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class practice
{
private:
    /* data */
public:
    void sort(vector<int> &arr, int low, int high, int mid);
    void merge(vector<int> &arr, int low, int high);
};

void practice::sort(vector<int> &arr, int low, int high, int mid)
{
    vector<int> temp;
    int lp = low;
    int rp = mid + 1;

    while (lp <= mid && rp <= high)
    {
        if (arr[lp] < arr[rp])
        {
            temp.push_back(arr[lp++]);
        }
        else
        {
            temp.push_back(arr[rp++]);
        }
    }

    // push remaining lp items
    while (lp <= mid)
    {
        temp.push_back(arr[lp++]);
    }

    // push remaining rp items
    while (rp <= high)
    {
        temp.push_back(arr[rp++]);
    }

    // now add items in original array
    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}
void practice::merge(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;

    int mid = (low + high) / 2;
    merge(arr, low, mid);      // merge lp elements
    merge(arr, mid + 1, high); // merge rp elements
    sort(arr, low, high, mid); // replace elemnts accordingly in array wrt. accending order
}

int main()
{
    vector<int> arr = {1, 3, 2, 4, 7, 5};
    vector<int> arr3 = {13, 46, 24, 52, 20, 9};
    practice sol;
    sol.merge(arr3, 0, arr3.size() - 1);
    for (int x : arr3)
    {
        cout << x << " ";
    }
}