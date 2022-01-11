/*
 * Defition for a binary tree node
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
    int ans=0;
    int sumRootToLeaf(TreeNode* root) {
        eval_bin(root,"");
        return ans;
    }
    
    void eval_bin(TreeNode*node, string num){
        if(node==NULL)
            return;          
        
        num+=to_string(node->val);       
        if(node->left==NULL && node->right==NULL){ //if left node, evaluate binary value
            for(int i=0; i<num.size(); i++)
                ans+=(num[num.size()-1-i]=='1'? pow(2,i) : 0);
        }
        eval_bin(node->left, num);
        eval_bin(node->right, num);  
    }
};
