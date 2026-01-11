/*
Two Pointers Practice — LeetCode 42: Trapping Rain Water

You are given n non-negative integers representing an elevation map where the width
of each bar is 1. Compute how much water it can trap after raining.

Return the total units of trapped water.

Constraints (as in LeetCode):
- 1 <= n <= 2e4
- 0 <= height[i] <= 1e5

Example 1:
Input:  height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6

Example 2:
Input:  height = [4,2,0,3,2,5]
Output: 9

---

This file is set up as a runnable program.

Input format for THIS program:
- First line: n
- Second line: n integers (heights)

Output:
- One integer: total trapped water

Sample Input:
12
0 1 0 2 1 0 1 3 2 1 2 1

Sample Output:
6

Expected:
- Time: O(n)
- Extra space: O(1)

Hint (conceptual, not the full solution):
- Think about maintaining left/right maxima while moving pointers inward.
*/

#include <iostream>
#include <vector>

using namespace std;

// TODO: Implement this.
long long trapWater(const vector<int> &height)
{
    // Write your solution here.
    return 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n))
        return 0;

    vector<int> height(n);
    for (int i = 0; i < n; i++)
        cin >> height[i];

    cout << trapWater(height) << "\n";
    return 0;
}
