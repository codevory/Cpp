#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    string encode(vector<string> &strs)
    {
        if (strs.empty())
            return "";
        string res = "";
        for (int i = 0; i < strs.size(); i++)
        {
            string str = strs[i];
            res += to_string(str.size()) + "#" + str;
        }
        return res;
    }

    vector<string> decode(string s)
    {
        if (s.empty())
            return {};
        vector<string> res;
        int i = 0;
        while (i < s.size())
        {
            int j = i;
            while (s[j] != '#')
            {
                j++;
            }
            int length = stoi(s.substr(i, j - i));
            i = j + 1;
            j = i + length;
            res.push_back(s.substr(i, length));
            i = j;
        }
        return res;
    }
};

int main()
{
    Solution obj;
    vector<string> dummy_input = {"Hello", "World"};

    // Encode the vector
    string encoded = obj.encode(dummy_input);
    cout << "Encoded: " << encoded << endl;

    // Decode it back
    vector<string> decoded = obj.decode(encoded);
    cout << "Decoded: ";
    for (const string &str : decoded)
    {
        cout << str << " ";
    }
    cout << endl;

    return 0;
}