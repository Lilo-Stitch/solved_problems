class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        int ans[101] = {0};
        for (int i = 0; i < arr.size(); i++) {
            ans[arr[i]] = i+1;
        }
        for (int j = 0; j < pieces.size(); j++) {
            int count = ans[pieces[j][0]] -1;
            for (int i = 0; i <pieces[j].size(); i++) {
                if(ans[pieces[j][i]] == 0) return false;
                if(count == ans[pieces[j][i]] - 1) count = ans[pieces[j][i]];
                else return false;
            }
        }
        return true;
    }
};
//accepted
