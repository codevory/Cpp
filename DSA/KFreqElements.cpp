// 347. Top K Frequent Elements
// Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

// Input: nums = [1,1,1,2,2,3], k = 2
// Output: [1,2]

// Input: nums = [1], k = 1
// Output: [1]

// Input: nums = [1,2,1,2,1,2,3,1,3,2], k = 2
// Output: [1,2]

// Approach
//  Step 1 create a unordere_map suppose count & add values one by one in it via loop to count exactly how many times do each number appeared.;
// step 2 Convert map to vector of pairs, create a array of vector with pair in it both of int suppose you named it arr & push all values of count in it in reverse order ie. second followed by first.
//  step 3 Sort arr in reverse order by arr.rbegin(),arr.rend() , by this way highest values will start from first . eg.  [(4,1), (4,2), (2,3)] here 4 is freq , 1 is numb.
// step 4 create new array of vector eg ans, & push values of arr.second(values not freq '.' we need to return values not freq) untill loop ends ie n = k;
// now return .

#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> count;
        for (int val : nums)
        {
            count[val]++;
        }

        vector<pair<int, int>> arr;
        for (auto p : count)
        {
            arr.push_back({p.second, p.first});
        }
        sort(arr.rbegin(), arr.rend());
        vector<int> ans;
        for (int i = 0; i < k; i++)
        {
            ans.push_back(arr[i].second);
        }
        return ans;
    }
};

int main()
{
    vector<int> nums = {1, 2, 1, 2, 1, 2, 3, 1, 3, 2};
    vector<int> arr2 = {1};
    int k = 1;
    Solution obj;
    vector<int> result = obj.topKFrequent(arr2, k);

    cout << "[";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
        if (i < result.size() - 1)
            cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}