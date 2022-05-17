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
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode*left=NULL,*right=NULL;
        if(cloned->val==target->val)
            return cloned;
        
        if(cloned->left)
            left=getTargetCopy(original,cloned->left,target);
        if(cloned->right)
            right=getTargetCopy(original,cloned->right,target);
    
        if(left)
            return left;
        else if(right)
            return right;
        
        return NULL;
    }
};
