#include <iostream>
#include <algorithm>
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

    void sumOfNaturalNum(int n, int count)
    {
        int sum = 0;
        if (count > n)
            return;
        sum += count;
        sumOfNaturalNum(n, count + 1);
        cout << "sum : " << sum << endl;
    }
};

int main()
{
    Solution obj;
    obj.nTimesName(10, "Shahijahan", 1);
    obj.nTimesNumber(5, 1);
    obj.Nto1(7);
    obj.sumOfNaturalNum(5, 1);
}