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
};

int main()
{
    Solution obj;
    obj.nTimesName(10, "Shahijahan", 1);
}