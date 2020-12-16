// formula is P(r, c) = P(r-1, c) + P(r-1, c-1)
//recursion
//TLE
/*
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        if (rowIndex == 0) {vector<int> first; first.push_back(1); return first;}
        for (int i= 0; i <= rowIndex; i++) {
            if (i==0 || i == rowIndex) ans.push_back(1);
            else ans.push_back(getRow(rowIndex-1)[i] + getRow(rowIndex-1)[i-1]);
        }
        return ans;
    }
}; */

//tried to copy the left side of trianlge, still TLE
//maybe recursion is not good for this type of problem
/*class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        for (int i= 0; i <= rowIndex; i++) {
            if (i==0 || i == rowIndex) ans.push_back(1);
            else { 
            if (i> rowIndex/2) {
                ans.push_back((ans[rowIndex-i])%100009);
            } else
                ans.push_back((getRow(rowIndex-1)[i])%100009 + (getRow(rowIndex-1)[i-1])%100009); }
        }
        return ans;
    }
};
*/
