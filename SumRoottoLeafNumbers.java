/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    private int ans = 0;

    public int sumNumbers(TreeNode root) {
        dfs(root, "");

        return ans;
    }


    private void dfs(TreeNode node, String number){
        if(node == null) return;
        if(node.left == null && node.right == null){
            ans += Integer.parseInt(number + node.val);
            return;
        }

        dfs(node.left, number+node.val);
        dfs(node.right, number+node.val);
        
    }
}
