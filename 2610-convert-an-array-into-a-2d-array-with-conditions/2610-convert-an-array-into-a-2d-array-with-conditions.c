/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int compare(void const *a, void const *b) {
    return *(int *)a - *(int *)b;
}

int** findMatrix(int* nums, int numsSize, int* returnSize, int** returnColumnSizes){
    int** answer = (int**)malloc(sizeof(int*) * numsSize);

    int idx = 1;
    int max = 1;
    *returnSize = 1;

    qsort(nums, numsSize, sizeof(int), compare);

    for (int i=1,prev=nums[0];i<numsSize;i++) {
        if (prev == nums[i]) idx++;
        else {
            prev = nums[i];
            idx = 1;
        }
        if (*returnSize < idx) *returnSize = idx;
    }

    *returnColumnSizes = (int *)calloc(1,sizeof(int)*(*returnSize));

    for (int i=0;i<(*returnSize);i++) {
        answer[i] = (int *)malloc(sizeof(int)*(numsSize));
    }

    answer[0][0] = nums[0];
    (*returnColumnSizes)[0] = 1;

    for (int i=1,row=0,prev=nums[0];i<numsSize;i++) {
        if (prev == nums[i]) {
            row++;
        }
        else {
            prev = nums[i];
            row = 0;
        }

        answer[row][(*returnColumnSizes)[row]] = nums[i];
        (*returnColumnSizes)[row]++;
    }
    return answer;
}