#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;

// Given an integer N, return true it is an Armstrong number otherwise return false.
// An Amrstrong number is a number that is equal to the sum of its own digits each
// raised to the power of the number of digits.

class Solution
{
public:
    bool armStrong(int num)
    {
        int size = (int)(log10(num) + 1);
        int orig = num;
        int ans = 0;
        while (num > 0)
        {
            int curr = num % 10;
            ans += pow(curr, size);
            num = num / 10;
        }
        return ans == orig;
    };

    // Given an integer N, return all divisors of N.
    vector<int> allDivisors(int num)
    {
        vector<int> ans;
        int d = 1;
        while (d <= num)
        {
            if (num % d == 0)
            {
                ans.push_back(d);
            }
            d++;
        }
        return ans;
    }

    // optimal sol
    vector<int> getDivisors(int num)
    {
        vector<int> res;
        for (int d = 1; d * d <= num; d++)
        {
            if (num % d == 0)
            {
                res.push_back(d);

                if (d != num / d)
                {
                    res.push_back(num / d);
                }
            }
        }
        return res;
    }

    // Check if a number is prime or not
    // brute force
    bool isPrimeNumber(int num)
    {
        int cnt = 0;
        for (int i = 1; i < num; i++)
        {
            if (num % i == 0)
            {
                cnt++;
            }
        }
        return cnt <= 2;
    };

    // optimal primeNumbers
    bool isprime(int n)
    {
        int cnt = 0;
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                cnt++;

                if (n / i != i)
                {
                    cnt++;
                }
            }
        }
        return cnt <= 2;
    }
};

int main()
{
    Solution obj;
    cout << obj.armStrong(153) << endl;
    for (int val : obj.allDivisors(36))
    {
        cout << val << " ";
    }
    cout << " " << endl;
    for (int i : obj.getDivisors(36))
    {
        cout << i << " ";
    }
    cout << " " << endl;

    cout << obj.isPrimeNumber(7) << endl;
    cout << obj.isprime(7) << endl;
}