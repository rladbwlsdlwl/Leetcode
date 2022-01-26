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
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>a,b;
        inorder(root1, a); // ascending sort
        inorder(root2, b); // ascending sort
        
        vector<int>ans;
        int i=0,j=0;
        while(i<a.size() && j<b.size()){
            if(a[i]<=b[j])
                ans.push_back(a[i++]);
            else
                ans.push_back(b[j++]);
        }
        
        while(i!=a.size())
            ans.push_back(a[i++]);
        while(j!=b.size())
            ans.push_back(b[j++]);
        
        
        return ans;
    }
    
    void inorder(TreeNode*node, vector<int>&tmp){
        if(node){
            inorder(node->left, tmp);
            tmp.push_back(node->val);
            inorder(node->right, tmp);
        }
    }
};
