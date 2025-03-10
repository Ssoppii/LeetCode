/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* buildArray(int* nums, int numsSize, int* returnSize) {
    int* arr = (int*)malloc(numsSize*sizeof(int));

    for (int i=0;i<numsSize;i++) {
        arr[i] = nums[nums[i]];
    }

    *returnSize = numsSize;
    return arr;
}