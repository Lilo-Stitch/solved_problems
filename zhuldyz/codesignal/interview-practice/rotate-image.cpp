// In-place rotation to 90 degrees to right
// O(n^2)
//divide and conquer

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int r = matrix.size();
        for (int i = 0; i < r/2; i++) {
            for(int j = i; j < r - 1 - i; j++) {
                int temp = matrix[i][j];
                // from bottom to top
                matrix[i][j] = matrix[r - 1 - j][i];
                // left to right
                matrix[r-1-j][i] = matrix[r-1-i][r-1-j];
                // from top to bottom
                matrix[r-1-i][r-1-j] = matrix[j][r-1-i];
                // right to left
                matrix[j][r-1-i] = temp;

            }
        }
    }
};

// firstly transpose matrix then mirror it
//also O(n^2)
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        for(int i = 0; i < n; ++i){
            for(int j = i; j < n; ++j){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        for(int i = 0; i < n; ++i){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
