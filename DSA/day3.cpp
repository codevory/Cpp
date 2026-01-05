#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <unordered_set>
#include <deque>
#include <set>
#include <map>
#include <unordered_map>
#include <algorithm>
using namespace std;


//linear search through vectors
void display(vector<int>&vec){
    for(auto it = vec.rbegin(); it !=vec.rend(); it++){
     cout << *(it) << " ";
    }
    cout << endl;
}
bool comparator(pair<int,int>p1,pair<int,int>p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first < p2.first) return true;
    else return false;
}

//  vector<int> vec = {1,2,3,4,5,6,7,8,9};
//     vector<pair<int , string>> vec2 = {{1,"Rabia"},{2,"Shahijahan"},{3,"Danish"},{4,"Rehana"}};
//     vector<pair<int,int>> vec3 = {{3,1},{2,1},{7,1},{10,3},{5,2}};
//     int arr[5] = {3,2,5,1,4};
//     sort(vec3.begin(), vec3.end(),comparator); 
//     for(auto val : vec3){
//         cout << val.first << " " << val.second << endl;;
//     }
//   vector<int> v1 = {1,2,3,4,5,6};
//    reverse(v1.begin() + 1,v1.begin() + 3);
//    for(auto val : v1){
//     cout << val << " ";
//    }

//Kadane's Algorithim
int maxSum(vector<int>& arr,int n){
//  int arr[7] = {3,-4,5,4,-1,7,-8}; // dumy array,can use vector as well;  //vector<int>arr = {3,-4,5,4,-1,7,-8};
int maxSum = INT_MIN; int sum = 0;
for(int st=0;st<n;st++){
   sum += arr[st];
   maxSum = max(sum,maxSum);
   if(sum < 0) sum = 0;
}
    return maxSum;
}

// vector<int> pairSum(vector<int>& nums,int target){
//     vector<int> ans;
//     int n = nums.size();
//     for(int i=0;i<n;i++){
//         for(int j=i+1;i<n;j++){
//             if(nums[i] + nums[j] == target){
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//     }
// return ans;
//     vector<int> vec = {2,7,11,15};
// vector<int> ans = pairSum(vec,9);
// cout << "ans 1 = " << ans[0] << ", ans 2 = " << ans[1];
// }

vector<int> sortSum(vector<int>& nums,int target){
    int n = nums.size();
    vector<int>ans;
    int i=0;int j = n-1;
while(i<j){
if(nums[i] + nums[j] > target) j--;
else if(nums[i] + nums[j] < target) i++;
else{
   ans.push_back(i);
   ans.push_back(j);
   return ans;
}
    }
return ans;
}

//majority element question by brute force
 int majorityElement(vector<int>& nums) {
   int n = nums.size();
   int ans = 0;
   for(int val : nums){
    int freq = 0;
    for(int elm : nums){
        if(elm == val){
            freq++;
        }
        if(freq > n/2){
            ans = val;
            return ans;
        }
    }
   }
   return ans;
    }

    //majority elemnt by optimized way sorting
//      int majorityElement(vector<int>& nums) {
//    int n = nums.size();
//    int ans = 0;
//    for(int val : nums){
//     int freq = 0;
//     for(int elm : nums){
//         if(elm == val){
//             freq++;
//         }
//         if(freq > n/2){
//             ans = val;
//             return ans;
//         }
//     }
//    }
//    return ans;
//     }

    //majority element problem
    int mj(vector<int>& nums){
        int n = nums.size();
        int freq = 0;
        int ans = 0;
        for(int i=0;i<n;i++){
            if(freq == 0){
                ans = nums[i];
            }
            if(ans == nums[i]){
                freq++;
            }
            else{
                freq--;
            }
        }
        return ans;
    }

int main(){
    vector<int> vec = {2,2,1,1,1,1,2};
cout << mj(vec);
    return 0;
}





