

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int* answer = (int*)malloc(numsSize * sizeof(int));
    for (int i=0;i<n;i++) {
        answer[i*2] = nums[i];
        answer[(i+1)*2-1] = nums[i+n];
    }
    *returnSize = numsSize;
    return answer;
}