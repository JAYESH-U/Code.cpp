#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//by sorting
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         sort(nums.begin(), nums.end());
//         vector<int> arr;
//         int i = 0;
//         int j = nums.size() - 1;
//         while (i < j) {
//             if (nums[i] + nums[j] == target) {
//                 arr.push_back(i);
//                 arr.push_back(j);
//                 break;  // Add break to exit the loop when a pair is found
//             } else {
//                 if (nums[i] + nums[j] > target) {
//                     j--;
//                 } else {
//                     i++;
//                 }
//             }
//         }
//         return arr;
//     }
// };

//without sorting
#include <unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        for(int i = 0; i < nums.size(); i++)
        {
            if(umap.find(target - nums[i]) != umap.end())
            {
                auto it = umap.find(target - nums[i]);
                return {it->second, i};
            }
            
            umap[nums[i]] = i;
        }
        return {};
    }
};

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n=nums.size();
//         for(int i=0; i<n-1; i++){
//             for(int j=i+1; j<n; j++){
//                 if(nums[i]+ nums[j] == target){
//                     return {i, j};
//                 }
//             }
//         }
//         return {};
//     }
// };

int main() {
    Solution s1;
    vector<int> v = {2, 7, 11, 15};
    vector<int> ans = s1.twoSum(v, 9);
    
    // Print the result
    for (int num : ans) {
        cout << num << " ";
    }
    
    return 0;
}
