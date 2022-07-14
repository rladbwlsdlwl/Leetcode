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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return dfs(0, preorder.size()-1, 0 ,preorder, inorder);
    }
    
    TreeNode* dfs(int left, int right, int parent, vector<int>& preorder, vector<int>& inorder){
        if(left>right)
            return NULL;
        
        TreeNode*node=new TreeNode(preorder[parent]);
        
        if(left==right)
            return node;
        // find root
        int root;
        for(int i=left; i<=right; i++){
            if(preorder[parent]==inorder[i]){
                root=i; break;
            }
        }
        
        node->left=dfs(left, root-1, parent+1, preorder, inorder);
        node->right=dfs(root+1, right, parent+(root-left+1), preorder, inorder);
        
        return node;
    }
};
