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
    int sumOfLeftLeaves(TreeNode* root) {
        int ans=0;
        if(root){
            if(root->left && root->left->left==NULL && root->left->right==NULL)
                ans+=root->left->val+sumOfLeftLeaves(root->right);
            else
                ans+=sumOfLeftLeaves(root->left)+sumOfLeftLeaves(root->right);
            
        }
        
        return ans;
    }
};
