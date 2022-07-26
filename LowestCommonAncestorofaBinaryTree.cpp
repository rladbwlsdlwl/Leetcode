/* 
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
private:
    TreeNode* parent;
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        dfs(root, p->val, q->val);
        
        return parent;
    }
    
    bool dfs(TreeNode*root, int p, int q){
        bool left=false, right=false;
        if(!root)
            return false;
        
        if(dfs(root->left, p, q))
            left=true;
        if(dfs(root->right, p, q))
            right=true;
        
        if(left && right || (root->val==p || root->val==q) && (left || right))
            parent=root;
        
            
        return left||right||root->val==p||root->val==q;
            
    }
};
