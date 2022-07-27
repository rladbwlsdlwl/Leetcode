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
    void flatten(TreeNode* root) {
        root=dfs(root);
    }
    
    TreeNode* dfs(TreeNode* node){
        if(!node)
            return NULL;
        
        TreeNode*rightNode=node->right;
        
        node->right=dfs(node->left);
        node->left=NULL;
        
        TreeNode*cur=node;
        for(int i=0;i<count(node->right);i++)
            cur=cur->right;
        
        cur->right=rightNode;
        cur->right=dfs(rightNode);
        
        return node;
    }
    
    int count(TreeNode* p){
        if(!p)
            return 0;
        return 1+count(p->right);
    }
};
