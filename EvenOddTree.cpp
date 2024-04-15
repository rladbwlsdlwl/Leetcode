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
private:
    queue<pair<TreeNode*, int>> q; // bfs - queue
public: 
    bool isEvenOddTree(TreeNode* root) {
        queue<pair<int, int>> tmp; // {TreeNode->val, height}

        q.push({root, 0}); // {TreeNode*, height}
        while(!q.empty()){
            pair<TreeNode*, int> p = q.front();
            TreeNode* node = p.first;
            int h = p.second;

            int prevVal = 0;
            while(!tmp.empty() && tmp.back().second < h){
                int tmpVal = tmp.front().first, tmpHeight = tmp.front().second;
                
                if(tmpHeight % 2){ // odd, desc
                    if(tmpVal % 2 || prevVal <= tmpVal && prevVal)
                        return false;
                }else if(tmpHeight % 2 == 0){ // even, ascd
                    if(tmpVal % 2 == 0 || prevVal >= tmpVal && prevVal)
                        return false;
                }

                prevVal = tmpVal;
                tmp.pop();
            }

            tmp.push({node->val, h});
            q.pop();
            if(node->left)
                q.push({node->left, h+1}); 
            if(node->right)
                q.push({node->right, h+1});     
        }

        int prevVal = 0;
        while(!tmp.empty()){
            int tmpVal = tmp.front().first, tmpHeight = tmp.front().second;
            
            if(tmpHeight % 2){ // odd, desc
                if(tmpVal % 2 || prevVal <= tmpVal && prevVal)
                    return false;
            }else if(tmpHeight % 2 == 0){ // even, ascd
                if(tmpVal % 2 == 0 || prevVal >= tmpVal && prevVal)
                    return false;
            }

            prevVal = tmpVal;
            tmp.pop();
        }

        return true;
    }
};
