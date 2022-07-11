/* 
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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        dfs(root, 0, ans);
        
        return ans;
    }
    
    void dfs(TreeNode*node, int height, vector<int>&ans){
        if(!node)
            return ;
        if(height==ans.size())
            ans.push_back(node->val);
        
        dfs(node->right, height+1, ans);
        dfs(node->left, height+1, ans);
    }
};
