/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */

class Solution {
    public final TreeNode getTargetCopy(final TreeNode original, final TreeNode cloned, final TreeNode target) {
         if(original == null){
            return original;
        }else if(original == target){
            return cloned;
        }else{
        TreeNode right = getTargetCopy(original.right, cloned.right, target);
        if(right !=null){
            return right;
        }
        TreeNode left = getTargetCopy(original.left, cloned.left, target);
        
        if(left !=null){
            return left;
        }
        
        return null;
        }
        
    }
}
