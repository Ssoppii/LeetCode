/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int t = 0;

void __help(struct TreeNode* root, int *ans) {
    if (root == NULL) return;
    else {
        ans[t++] = root->val;
        __help(root->left, ans);
        __help(root->right, ans);
    }
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int *ans;
    int k = 0;
    ans = (int*)malloc(101*sizeof(int));
    __help(root, ans);
    *returnSize = t;
    t = k;
    return ans;
}