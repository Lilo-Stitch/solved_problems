/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 
 // my first solution, is very slow (16 ms)
/** class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == NULL) return 0;
        
        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);
        
        if (leftDepth > rightDepth)
            return leftDepth + 1;
        else
            return rightDepth + 1;
        
    }
};
 */

// solved with bfs = 12 ms
// error was (int i = 0; i < q.size(); i++) which is logically wrong, because in loop i pop the element reducing the size

class Solution {
public:
    int maxDepth(TreeNode* root) {
        queue<TreeNode*> ans;
        int max =0;
        if (root== NULL) return max;
        ans.push(root);
        
        while(!ans.empty()) {
            max++;
            int len = ans.size();
            for (int i = 0; i < len; i++) {
                TreeNode* frontt = ans.front();
                ans.pop();
                if (frontt->left != NULL) ans.push(frontt->left);
                if (frontt->right != NULL) ans.push(frontt->right);
            }
        }
        return max;
    }
};
