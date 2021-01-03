/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
//Accepted
class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        queue<TreeNode*> o;
        o.push(original);
        
        queue<TreeNode*> c;
        c.push(cloned);

        while (!o.empty()) {
            TreeNode* node_o = o.front();
            TreeNode* node_c = c.front();
            o.pop();
            c.pop();
            
            if (node_o == target) {
                return node_c;   
            }
            
            if (node_o->left) {
                o.push(node_o->left);
                c.push(node_c->left);
            }
            if (node_o->right) {
                 o.push(node_o->right);
                c.push(node_c->right);
            }
        }
        return NULL;
    }
    
};
