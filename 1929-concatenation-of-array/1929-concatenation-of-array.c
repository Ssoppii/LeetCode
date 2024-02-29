/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int* arr = (int*)malloc(2*numsSize*sizeof(int));
    for (int i=0;i<numsSize;i++) {
        arr[i] = nums[i];
    }
    for (int i=0;i<numsSize;i++) {
        arr[numsSize + i] = nums[i];
    }

    *returnSize = numsSize * 2;

    return arr;
}