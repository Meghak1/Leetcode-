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
    int maxAncestorDiff(TreeNode* root) {
        return dfs(root,root->val,root->val);
    }

private:
    int dfs(TreeNode* node,int minVal,int maxVal)   {
        if(!node) return maxVal-minVal;

        if(node->val<minVal) minVal = node->val;
        else if(node->val> maxVal) maxVal=node->val;

        int l_diff=dfs(node->left,minVal,maxVal);
        int r_diff=dfs(node->right,minVal,maxVal);

        return max(l_diff,r_diff);
    }
};
