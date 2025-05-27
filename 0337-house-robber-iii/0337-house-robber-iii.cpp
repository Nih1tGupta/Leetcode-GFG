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
    vector<int> solve(TreeNode* root) {
        if (root == nullptr) {
            return {0, 0}; // [I, E]
        }
        vector<int> left = solve(root->left); // [I, E]
        vector<int> right = solve(root->right);
        vector<int> res(2);
        res[0] = root->val + left[1] + right[1]; // I
        res[1] = max(left[0], left[1]) + max(right[0], right[1]); // Ex
        return res;
    }
    int rob(TreeNode* root) {
         vector<int>y=solve(root);
        return max(y[0], y[1]);
    }
};