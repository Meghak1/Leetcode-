/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * }
 */

class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leaves1, leaves2;
        getLeavesDFS(root1, leaves1);
        getLeavesDFS(root2, leaves2);

        return leaves1 == leaves2;
    }

private:
    void getLeavesDFS(TreeNode* root, vector<int>& leaves) {
        if (!root) {
            return;
        }
      if (!root->left && !root->right) {
            leaves.push_back(root->val);
        }

        getLeavesDFS(root->left, leaves);
        getLeavesDFS(root->right, leaves);
    }
};
