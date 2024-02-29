/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int compare(const int* a, const int* b) {
	return(*a - *b);
}

int** minimumAbsDifference(int* arr, int arrSize, int* returnSize, int** returnColumnSizes) {
    int length = 0;
    *returnColumnSizes = (int*) malloc(arrSize * sizeof(int));
    int **answer = (int**) malloc(arrSize * sizeof(int*));
    answer[0] = (int*) malloc(2 * sizeof(int));
    int diff = 100000;

    qsort(arr, arrSize, sizeof(int), compare);

    for (int i=0;i<arrSize-1;i++) {
        if (arr[i+1] - arr[i] < diff) {
            answer[0][0] = arr[i];
            answer[0][1] = arr[i + 1];
            (*returnColumnSizes)[0] = 2;
            diff = arr[i + 1] - arr[i];
            length = 1;
        } 
        else if (arr[i+1] - arr[i] == diff) {
            answer[length] = (int*) malloc(2 * sizeof(int));
            answer[length][0] = arr[i];
            answer[length][1] = arr[i + 1];
            (*returnColumnSizes)[length] = 2;
            length++;
        }
    }

    *returnSize = length;
    return answer;
}