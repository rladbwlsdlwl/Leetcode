/**
 *
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* newNode(int val){
    struct TreeNode* newNode=(struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->val=val;
    newNode->left=NULL;newNode->right=NULL;
    
    return newNode;
}

struct TreeNode* insertIntoBST(struct TreeNode* root, int val){
    struct TreeNode*curr=root;
    if(!root)
        return newNode(val);
    
    if(root->val>val)
        curr->left=insertIntoBST(root->left,val);
    else
        curr->right=insertIntoBST(root->right,val);
    
    return curr;
}

