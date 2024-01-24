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
    int pseudoPalindromicPaths (TreeNode* root) {
      return dfs(root,0);
  }

private:
    int dfs(TreeNode* curr_node,int curr_path)   {
    if (!curr_node) 
      return 0;

    curr_path^=(1<<curr_node->val);

    if ((!curr_node->left)&&(!curr_node->right)) {
      
      return (curr_path&(curr_path-1))==0;
    }
      
    return dfs(curr_node->left,curr_path)+dfs(curr_node->right,curr_path);
    }
};
