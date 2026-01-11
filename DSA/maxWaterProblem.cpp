/*
LeetCode 11 — Container With Most Water

You are given an integer array height of length n.
There are n vertical lines drawn such that the two endpoints of the i-th line are
(i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the
container contains the most water.

Return the maximum amount of water a container can store.

Notes:
- You may not slant the container.

Constraints (as in LeetCode):
- 2 <= n <= 1e5
- 0 <= height[i] <= 1e4

Example 1:
Input:  height = [1,8,6,2,5,4,8,3,7]
Output: 49

Example 2:
Input:  height = [1,1]
Output: 1

---

This file is set up as a runnable program so you can practice locally.

Input format for THIS program:
- First line: n
- Second line: n integers (heights)

Output:
- One integer: maximum area

Sample Input:
9
1 8 6 2 5 4 8 3 7

Sample Output:
49
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// TODO: Implement this.
// Expected time: O(n)
// Expected extra space: O(1)
long long maxArea(const vector<int> &height)
{
    int n = height.size();
    int lp = 0;
    int rp = n - 1;
    int maxWater = 0;
    while (lp < rp)
    {
        int h = min(height[lp], height[rp]);
        int w = rp - lp;
        int area = h * w;
        maxWater = max(area, maxWater);
        height[lp] < height[rp] ? lp++ : rp--;
    }
    return maxWater;
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

    cout << maxArea(height) << "\n";
    return 0;
}
