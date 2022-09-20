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
private:
    int ans=100000;
public:
    int minDiffInBST(TreeNode* root) {
        dfs(root);
        return ans;
    }
    
    TreeNode* rightChild(TreeNode*node){
        return (node->right ? rightChild(node->right) : node);
    }
    TreeNode* leftChild(TreeNode*node){
        return (node->left ? leftChild(node->left) : node);
    }
    
    void dfs(TreeNode* root){
        if(!root)
            return ;
        if(root->left && root->right){
            ans=min(ans, root->val - rightChild(root->left)->val);
            ans=min(ans, leftChild(root->right)->val - root->val);
            
            dfs(root->left);
            dfs(root->right);
        }else if(root->left){
            ans=min(ans, root->val - rightChild(root->left)->val);
            
            dfs(root->left);
        }else if(root->right){
            ans=min(ans, leftChild(root->right)->val - root->val);
            
            dfs(root->right);
        }else // leaf node
            return;
    }
};
