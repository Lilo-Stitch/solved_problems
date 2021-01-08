//brute force accepted
//Runtime: 60 ms
//Memory Usage: 10.3 MB
//very slow, but memory is good
/*
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans(nums.size(), 0); 
        for(int i = 0; i < nums.size(); i++) {
            for(int j = 0; j <nums.size(); j++) {
                if(nums[i] > nums[j]) ans[i]++;
            }
        }
        return ans;
        
        
    }
};
*/
//Runtime: 12 ms
//Memory Usage: 10.7 MB

class Solution {
public:
    struct def {
    int j = -1; };
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int, def>occ;
        vector<int> ans;
        ans =nums;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size();i++) {
            if (occ[nums[i]].j < 0) occ[nums[i]].j = i;
        }
        for(int &i : ans) {
            i = occ[i].j;
        }
        return ans;
        
        
    }
};
