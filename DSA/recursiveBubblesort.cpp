#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Given an array of N integers,
// write a program to implement the Recursive Bubble Sort algorithm.

class recursiveBubblesort
{
private:
    /* data */
public:
    void recursivesort(vector<int> &arr, int n);
};

void recursiveBubblesort::recursivesort(vector<int> &arr, int n)
{
    /* for (int i = n - 1; i >= 0; i--)
     {
         for (int j = 0; j <= i - 1; j++)
         {
             if (arr[j] > arr[j + 1])
             {
                 int temp = arr[j + 1];
                 arr[j + 1] = arr[j];
                 arr[j] = temp;
                 // swap(arr[j], arr[j + 1]);
             }
         }
     } */
    int didSwap = 0;
    if (n == 1)
        return;
    for (int i = 0; i <= n - 2; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
            didSwap = 1;
        }
    }
    if (didSwap == 0)
        return;
    recursivesort(arr, n - 1);
}

int main()
{
    vector<int> arr3 = {13, 46, 24, 52, 20, 9};
    recursiveBubblesort sol;
    sol.recursivesort(arr3, arr3.size());
    for (int x : arr3)
    {
        cout << x << " ";
    }
}
