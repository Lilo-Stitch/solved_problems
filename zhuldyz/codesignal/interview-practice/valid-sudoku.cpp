// O(1) space complexity
// O(1) time compelxity

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<int>> rbox(9, vector<int>(9)),  cbox(9, vector<int>(9)), bbox(9, vector<int>(9));
        //row
        for (int j = 0; j < 9; j++) {
            //column
            for (int i = 0; i < 9; i++)  {
                if (board[j][i] != '.') {
                    int num= board[j][i] - '0' -1;
                    int k = j/3*3 + i/3;
                    if (rbox[j][num] || cbox[i][num] || bbox[k][num]) return false;
                    rbox[j][num] = cbox[i][num] =bbox[k][num] = 1;
                    
                }
                
            }
        }
        return true;
    }
};
