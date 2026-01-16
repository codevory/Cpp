/*
    242. Valid Anagram

    PROBLEM STATEMENT:
    Given two strings s and t, return true if t is an anagram of s, and false otherwise.

    An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase,
    typically using all the original letters exactly once.

    Example 1:
    Input: s = "anagram", t = "nagaram"
    Output: true

    Example 2:
    Input: s = "rat", t = "car"
    Output: false

    Constraints:
    1 <= s.length, t.length <= 5 * 10^4
    s and t consist of lowercase English letters.

    Follow up: What if the inputs contain Unicode characters?
    How would you adapt your solution to such a case?
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

// TODO: Implement solution here
bool validAnagram(string s, string t)
{

    vector<int> count(26, 0);
    if (s.length() != t.length())
    {
        return false;
    }

    // loop over values
    for (int i = 0; i < t.length(); i++)
    {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int val : count)
    {
        if (val != 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    cout << boolalpha;
    // Test case 1
    string s1 = "anagram";
    string t1 = "nagaram";
    cout << validAnagram(s1, t1) << endl;
    cout << "Test 1: s = \"" << s1 << "\", t = \"" << t1 << "\"" << endl;
    cout << "Expected: true" << endl
         << endl;

    // Test case 2
    string s2 = "rat";
    string t2 = "car";
    cout << validAnagram(s2, t2) << endl;
    cout << "Test 2: s = \"" << s2 << "\", t = \"" << t2 << "\"" << endl;
    cout << "Expected: false" << endl;

    return 0;
}
