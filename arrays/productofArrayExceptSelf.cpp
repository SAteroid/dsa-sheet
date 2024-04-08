// 238. Product of Array Except Self
// Solved
// Medium
// Topics
// Companies
// Hint
// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

// You must write an algorithm that runs in O(n) time and without using the division operation.

 

// Example 1:

// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]
// Example 2:

// Input: nums = [-1,1,0,-3,3]
// Output: [0,0,9,0,0]
 

// Constraints:

// 2 <= nums.length <= 105
// -30 <= nums[i] <= 30
// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
 

// Follow up: Can you solve the problem in O(1) extra space complexity? (The output array does not count as extra space for space complexity analysis.)

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int s=nums.size();
        int product =1;
        // int flag=-1;
        int count=0;
        vector<int>ans;
        for(int i=0;i<s;i++){
            if(nums[i]!=0){
                product*=nums[i];
            }
            else{
                count++;
            }
        }
        if(count>1){
            for(int i=0;i<s;i++){
                ans.push_back(0);
            }
        }
        else if(count>0){
            for(int i=0;i<s;i++){
                if(nums[i]==0){
                    ans.push_back(product);
                }
                else{
                    ans.push_back(0);
                }
            }
        }
        else{
            for(int i=0;i<s;i++){
                ans.push_back(product/nums[i]);
            }
        }
        return ans;
    }
};