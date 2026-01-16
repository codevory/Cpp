/*
    125. Valid Palindrome

    PROBLEM STATEMENT:
    A phrase is a palindrome if, after converting all uppercase letters into lowercase
    letters and removing all non-alphanumeric characters, it reads the same forward and backward.
    Alphanumeric characters include letters and numbers.

    Given a string s, return true if it is a palindrome, or false otherwise.

    Example 1:
    Input: s = "A man, a plan, a canal: Panama"
    Output: true

    Example 2:
    Input: s = "race a car"
    Output: false

    Example 3:
    Input: s = " "
    Output: true

    Constraints:
    1 <= s.length <= 2 * 10^5
    s consists of printable ASCII characters.
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Solution 1: Using Two Pointers (Optimal)
// Time Complexity: O(n)
// Space Complexity: O(1)
bool isPalindrome(string s)
{
    int lp = 0, rp = s.length() - 1;
    while (lp < rp)
    {
        if (!isalnum(s[lp]))
        {
            lp++;
            continue;
        }
        if (!isalnum(s[rp]))
        {
            rp--;
            continue;
        }
        if (tolower(s[lp]) != tolower(s[rp]))
        {
            return false;
        }
        lp++;
        rp--;
    }
    return true;
}

// Solution 2: Using Filtered String
// Time Complexity: O(n)
// Space Complexity: O(n)
bool isPalindromeV2(string s)
{
    string filtered = "";

    // Build filtered string with only alphanumeric characters (lowercase)
    for (char c : s)
    {
        if (isalnum(c))
        {
            filtered += tolower(c);
        }
    }

    // Check if filtered string is palindrome
    int left = 0, right = filtered.length() - 1;
    while (left < right)
    {
        if (filtered[left] != filtered[right])
        {
            return false;
        }
        left++;
        right--;
    }

    return true;
}

// Test cases
int main()
{
    // Test case 1
    string test1 = "A man, a plan, a canal: Panama";
    cout << "Test 1: \"" << test1 << "\"" << endl;
    cout << "Output: " << (isPalindrome(test1) ? "true" : "false") << endl;
    cout << "Expected: true" << endl
         << endl;

    // Test case 2
    string test2 = "race a car";
    cout << "Test 2: \"" << test2 << "\"" << endl;
    cout << "Output: " << (isPalindrome(test2) ? "true" : "false") << endl;
    cout << "Expected: false" << endl
         << endl;

    // Test case 3
    string test3 = " ";
    cout << "Test 3: \"" << test3 << "\"" << endl;
    cout << "Output: " << (isPalindrome(test3) ? "true" : "false") << endl;
    cout << "Expected: true" << endl
         << endl;

    // Test case 4
    string test4 = "0P";
    cout << "Test 4: \"" << test4 << "\"" << endl;
    cout << "Output: " << (isPalindrome(test4) ? "true" : "false") << endl;
    cout << "Expected: false" << endl
         << endl;

    // Test case 5
    string test5 = ".,";
    cout << "Test 5: \"" << test5 << "\"" << endl;
    cout << "Output: " << (isPalindrome(test5) ? "true" : "false") << endl;
    cout << "Expected: true" << endl;

    return 0;
}

/*
    KEY INSIGHTS:
    1. Two-pointer approach is optimal (O(1) space)
    2. Use isalnum() to check if character is alphanumeric
    3. Use tolower() for case-insensitive comparison
    4. Skip non-alphanumeric characters efficiently

    APPROACH:
    - Initialize left pointer at start, right pointer at end
    - Move pointers towards center
    - Skip non-alphanumeric characters
    - Compare characters (case-insensitive)
    - If mismatch found, return false
    - If pointers cross without mismatch, return true
*/
