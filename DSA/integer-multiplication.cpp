#include <bits/stdc++.h>
using namespace std;

string trimLeadingZeros(const string &s)
{
    int i = 0;
    while (i < static_cast<int>(s.size()) && s[i] == '0')
    {
        ++i;
    }
    return (i == static_cast<int>(s.size())) ? "0" : s.substr(i);
}

string addStrings(const string &a, const string &b)
{
    int i = static_cast<int>(a.size()) - 1;
    int j = static_cast<int>(b.size()) - 1;
    int carry = 0;
    string res;

    while (i >= 0 || j >= 0 || carry)
    {
        int da = (i >= 0) ? (a[i] - '0') : 0;
        int db = (j >= 0) ? (b[j] - '0') : 0;
        int sum = da + db + carry;
        res.push_back(static_cast<char>('0' + (sum % 10)));
        carry = sum / 10;
        --i;
        --j;
    }

    reverse(res.begin(), res.end());
    return trimLeadingZeros(res);
}

string subtractStrings(const string &a, const string &b)
{
    // Assumes a >= b
    int i = static_cast<int>(a.size()) - 1;
    int j = static_cast<int>(b.size()) - 1;
    int borrow = 0;
    string res;

    while (i >= 0)
    {
        int da = (a[i] - '0') - borrow;
        int db = (j >= 0) ? (b[j] - '0') : 0;
        if (da < db)
        {
            da += 10;
            borrow = 1;
        }
        else
        {
            borrow = 0;
        }

        res.push_back(static_cast<char>('0' + (da - db)));
        --i;
        --j;
    }

    while (res.size() > 1 && res.back() == '0')
    {
        res.pop_back();
    }
    reverse(res.begin(), res.end());
    return trimLeadingZeros(res);
}

string shiftLeftBy10Pow(const string &s, int zeros)
{
    if (s == "0")
    {
        return "0";
    }
    return s + string(zeros, '0');
}

string multiplySchoolbook(const string &a, const string &b)
{
    if (a == "0" || b == "0")
    {
        return "0";
    }

    int n = static_cast<int>(a.size());
    int m = static_cast<int>(b.size());
    vector<int> result(n + m, 0);

    for (int i = n - 1; i >= 0; --i)
    {
        int da = a[i] - '0';
        for (int j = m - 1; j >= 0; --j)
        {
            int db = b[j] - '0';
            int sum = da * db + result[i + j + 1];
            result[i + j + 1] = sum % 10;
            result[i + j] += sum / 10;
        }
    }

    string product;
    int k = 0;
    while (k < static_cast<int>(result.size()) && result[k] == 0)
    {
        ++k;
    }
    while (k < static_cast<int>(result.size()))
    {
        product.push_back(static_cast<char>('0' + result[k]));
        ++k;
    }

    return product.empty() ? "0" : product;
}

string karatsuba(const string &x, const string &y)
{
    string a = trimLeadingZeros(x);
    string b = trimLeadingZeros(y);

    if (a == "0" || b == "0")
    {
        return "0";
    }

    int n = max(static_cast<int>(a.size()), static_cast<int>(b.size()));
    if (n <= 32)
    {
        return multiplySchoolbook(a, b);
    }

    if (n % 2 == 1)
    {
        ++n;
    }

    a = string(n - static_cast<int>(a.size()), '0') + a;
    b = string(n - static_cast<int>(b.size()), '0') + b;

    int half = n / 2;
    string aHigh = a.substr(0, half);
    string aLow = a.substr(half);
    string bHigh = b.substr(0, half);
    string bLow = b.substr(half);

    string z2 = karatsuba(aHigh, bHigh);
    string z0 = karatsuba(aLow, bLow);
    string z1 = karatsuba(addStrings(aHigh, aLow), addStrings(bHigh, bLow));

    string middle = subtractStrings(subtractStrings(z1, z2), z0);
    string part1 = shiftLeftBy10Pow(z2, 2 * half);
    string part2 = shiftLeftBy10Pow(middle, half);

    return trimLeadingZeros(addStrings(addStrings(part1, part2), z0));
}

string multiplyBigIntegers(const string &a, const string &b)
{
    return karatsuba(a, b);
}

int main()
{
    string a = "3141592653589793238462643383279502884197169399375105820974944592";
    string b = "2718281828459045235360287471352662497757247093699959574966967627";

    cout << multiplyBigIntegers(a, b) << '\n';
}
