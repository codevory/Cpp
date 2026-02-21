#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    void nTimesName(int n, string name, int count)
    {
        if (count == n)
            return;

        cout << name << endl;
        nTimesName(n, name, count + 1);
    }

    void nTimesNumber(int n, int current)
    {
        if (current > n)
            return;
        nTimesNumber(n, current + 1);
        cout << current << endl;
    }

    void Nto1(int n)
    {
        if (n < 1)
            return;
        cout << n << " ";
        Nto1(n - 1);
    }

    int sumOfNaturalNum(int n)
    {
        return n * (n + 1) / 2;
    };

    // recursive approach to calculate sum of first N Natural Numbers
    int sumOfNum(int n)
    {
        if (n == 1)
        {
            return 1;
        }
        return n + sumOfNum(n - 1);
    }

    int FactorialOfN(int N)
    {
        if (N == 1)
            return N;
        return N * FactorialOfN(N - 1);
    }

    // reverse the array
    void reverseArr(vector<int> &arr, int N)
    {
        int lp = 0;
        int rp = arr.size() - 1;
        while (lp < rp)
        {
            swap(arr[lp], arr[rp]);
            lp++;
            rp--;
        }
    }

    // Palindrome string
    string isPalindrome(string &str)
    {
        int n = str.length();
        string copy = str;
        int lp = 0;
        int rp = n - 1;
        while (lp < rp)
        {
            swap(copy[lp], copy[rp]);
            lp++;
            rp--;
        }
        if (str == copy)
            return "Palindrome ";
        return "Not Palindrome";
    }

    bool palindrome(string &s, int i)
    {
        if (i >= s.length() / 2)
            return true;
        if (s[i] != s[s.length() - i - 1])
            return false;
        return palindrome(s, i + 1);
    }
};

int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};
    Solution obj;
    obj.nTimesName(10, "Shahijahan", 1);
    obj.nTimesNumber(5, 1);
    obj.Nto1(7);
    cout << "\n Sum : " << obj.sumOfNaturalNum(1) << endl;
    cout << " sum : " << obj.sumOfNum(1) << endl;
    cout << " Factorial of 3 : " << obj.FactorialOfN(3) << endl;
    obj.reverseArr(arr, 5);
    for (int n : arr)
    {
        cout << n << " ";
    }
    string s = "ABBAA";
    cout << "\n"
         << obj.isPalindrome(s) << endl;

    cout << obj.palindrome(s, 7) << endl;
    ;
}