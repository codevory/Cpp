#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int reverseNum(int n)
    {
        int reversed = 0;
        while (n > 0)
        {
            int lastDigit = n % 10;
            reversed = reversed * 10 + lastDigit;
            n = n / 10;
        }
        return reversed;
    }

    bool checkPalindrome(int n)
    {
        string m = to_string(n);
        int size = m.size();
        int lp = 0, rp = size - 1;
        bool res = false;
        while (lp < rp)
        {
            if (m[lp] != m[rp])
            {
                return false;
            }
            else
            {
                res = true;
            }
            lp++;
            rp--;
        }
        return res;
    }
    // Given two integers N1 and N2, find their greatest common divisor.
    int Gcd(int n1, int n2)
    {
        while (n1 > 0 && n2 > 0)
        {
            if (n1 > n2)
            {
                n1 = n1 % n2;
            }
            else
            {
                n2 = n2 % n1;
            }
            if (n1 == 0)
                return n2;
            return n1;
        }
        return -1;
    }
};

int main()
{
    Solution obj;
    cout << obj.reverseNum(12345000) << endl;
    Solution obj2;
    int n = -122 - 1;
    cout << obj2.checkPalindrome(n) << endl;
    Solution obj3;
    cout << obj3.Gcd(20, 15) << endl;
}