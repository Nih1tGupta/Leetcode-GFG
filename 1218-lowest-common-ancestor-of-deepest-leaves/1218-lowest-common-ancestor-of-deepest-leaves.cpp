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
    void depth(TreeNode* root, int d, unordered_map<int, int>& mp, int& maxD) {
    if (!root) return;

    maxD = max(maxD, d);
    mp[root->val] = d;

    depth(root->left, d + 1, mp, maxD);
    depth(root->right, d + 1, mp, maxD);
}
TreeNode* LCA(TreeNode* root, unordered_map<int, int>& mp, int maxD) {
    if (!root || mp[root->val] == maxD) {
        return root;
    }
    TreeNode* leftLCA = LCA(root->left, mp, maxD);
    TreeNode* rightLCA = LCA(root->right, mp, maxD);

    if (leftLCA && rightLCA) {
        return root;
    }
    return leftLCA ? leftLCA : rightLCA;
}
TreeNode* lcaDeepestLeaves(TreeNode* root) {
    unordered_map<int, int> mp;
    int maxD = 0;

    depth(root, 0, mp, maxD);
    return LCA(root, mp, maxD);
}
};