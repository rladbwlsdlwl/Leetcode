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
    void preorder(TreeNode*node, vector<int>& tmp){
        if(!node)
            return;

        tmp.push_back(node->val);
        preorder(node->left, tmp);
        preorder(node->right, tmp);
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;

        preorder(root, ans);

        return ans;
    }
};
