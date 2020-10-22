/**
 *Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int minDepth(struct TreeNode* root){
    if(!root)
        return 0;
    else if(!root->left && !root->right)
        return 1;
    else if(!root->left)
        return 1+minDepth(root->right);
    else if(!root->right)
        return 1+minDepth(root->left);
    else{
        int left=minDepth(root->left);
        int right=minDepth(root->right);
        
        if(left>right) return right+1;
        else return left+1;
    }
}

