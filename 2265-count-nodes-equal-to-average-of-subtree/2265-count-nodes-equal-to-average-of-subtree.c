/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int countNodes(struct TreeNode* root) {
    if (!root) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

int totalSum(struct TreeNode* root) {
    if (!root) return 0;
    return root->val + totalSum(root->left) + totalSum(root->right);
}

int averageOfSubtree(struct TreeNode* root) {
    if (!root) return 0;
    int sum = root->val + totalSum(root->left) + totalSum(root->right);
    int totalNodes = 1 + countNodes(root->left) + countNodes(root->right);

    int avg = sum/totalNodes;
    if (avg == root->val) {
        return 1 + averageOfSubtree(root->left) + averageOfSubtree(root->right);
    }
    return averageOfSubtree(root->left) + averageOfSubtree(root->right);
}