/**
 *Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int min(int p,int q){
    return (p>q ? q : p);
}

int minDepth(struct TreeNode* root){
    if(!root)
        return 0;
    else if(!root->left && !root->right) // if leaf node, return mine
        return 1;
    else if(!root->left) // if child node 1, find height of node ~ leafnode 
        return 1+minDepth(root->right);
    else if(!root->right)
        return 1+minDepth(root->left);
    else{
        int left=minDepth(root->left); // if childnode 2, return min(left,right)
        int right=minDepth(root->right);
        
        return min(left,right)+1;
    }
}
