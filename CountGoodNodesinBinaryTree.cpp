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
class Solution {
public:
    int goodNodes(TreeNode* root) {
        return dfs(root, -1000000);
    }
    
    int dfs(TreeNode*node, int maxParent){
        int ans=0;
        if(!node)
            return 0;
        
        if(maxParent<=node->val){
            ans++;
            maxParent=node->val;
        }
        
        int left=dfs(node->left, maxParent);
        int right=dfs(node->right, maxParent);
        
        return ans+left+right;
    }
};
