/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxdepth, ans;

void dfs(struct TreeNode *root, int depth) {
    if (root == NULL) return;
    depth += 1;

    if (root->left == NULL && root->right == NULL) {
        if (maxdepth < depth) {
            ans = root->val;
            maxdepth = depth;
        }
        else if (maxdepth == depth) {
            ans += root->val;
        }
        return;
    }
    dfs(root->left, depth);
    dfs(root->right, depth);
}

int deepestLeavesSum(struct TreeNode* root) {
    maxdepth = ans = 0;
    dfs(root, 0);

    return ans;
}