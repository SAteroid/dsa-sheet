// 128. Longest Consecutive Sequence
// Solved
// Medium
// Topics
// Companies
// Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

// You must write an algorithm that runs in O(n) time.

 

// Example 1:

// Input: nums = [100,4,200,1,3,2]
// Output: 4
// Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
// Example 2:

// Input: nums = [0,3,7,2,5,8,4,6,0,1]
// Output: 9
 

// Constraints:

// 0 <= nums.length <= 105
// -109 <= nums[i] <= 109

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int s = nums.size();
        if (s == 0)
            return 0;

        
        int maxim = 0;
        int count = 0;
        unordered_set<int> st(nums.begin(),nums.end());
        
        // for (int i = 0; i < s; ++i) {
        //     st.insert(nums[i]);
        // }
        
        vector<int> arr(st.begin(), st.end());
        int n = arr.size();
        
        sort(arr.begin(),arr.end());
        for(int i = 0; i < n - 1; i++) {
            if(arr[i + 1] == (arr[i] + 1)) {
                count++; 
            } else {
                maxim = max(count, maxim); 
                count = 0; 
            }
        }
        return max(count + 1, maxim + 1);
    }
};
