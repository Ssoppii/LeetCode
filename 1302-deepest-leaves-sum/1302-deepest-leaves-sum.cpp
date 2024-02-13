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
    int deepestLeavesSum(TreeNode* root) {
        int depth = 0;
        int ans = 0;
        queue<pair<TreeNode*, int>> q;
        
        if (root == nullptr)
            return 0;

        q.push({root, 0});

        while (!q.empty()) {
            auto [node, d] = q.front();
            q.pop();

            if (d > depth) {
                depth = d;
                ans = 0;
            }
            ans += node->val;

            if (node->left) q.push({node->left, d + 1});
            if (node->right) q.push({node->right, d + 1});
        }
        return ans;
    }
};