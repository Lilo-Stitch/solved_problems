//Kadane's algorithm
//Time complexity O(n)
//Space complexity O(1)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int max = -2147483648;
        int max_end = 0;
        for(int i = 0; i < nums.size(); i++) {
            max_end += nums[i];
            if(max_end > max) max = max_end;
            if(max_end <= 0) max_end = 0;
        }
        return max;
    }
};
