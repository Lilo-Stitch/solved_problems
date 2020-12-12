//now trying
// TLE
// O(n^2)
class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int> answ;
        int sum;
        for(int i = 0; i< nums.size(); i++) {
            sum = 0;
            for(int j = 0; j < nums.size(); j++) {
                sum += abs(nums[i] - nums[j]); 
            }
            answ.push_back(sum);
        }
        return answ;
    }
};
