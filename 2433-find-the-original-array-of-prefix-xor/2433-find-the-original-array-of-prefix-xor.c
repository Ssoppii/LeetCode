/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findArray(int* pref, int prefSize, int* returnSize) {
    int *ans = (int*)malloc(prefSize * sizeof(int));
    *returnSize = prefSize;
    ans[0] = pref[0];
    for (int i = 0; i < prefSize - 1; i++) {
        ans[i+1] = pref[i] ^ pref[i + 1];
    }
    return ans;
} 