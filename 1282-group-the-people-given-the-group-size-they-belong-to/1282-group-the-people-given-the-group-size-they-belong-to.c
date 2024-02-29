/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** groupThePeople(int* groupSizes, int groupSizesSize, int* returnSize, int** returnColumnSizes) {
    int* check = (int*)malloc(groupSizesSize * sizeof(int));

    for(int i=0;i<groupSizesSize;i++) *(check+i) = 0;

    int row=0,column=0,j=0;

    int** answer = (int**)malloc(groupSizesSize * sizeof(int*));
    *returnColumnSizes = (int*)malloc(groupSizesSize * sizeof(int));

    for(int i = 0; i < groupSizesSize; i++)
    {
        if(check[i])
            continue;

        column = 0;
        j = i;
        (*returnColumnSizes)[row] = groupSizes[i];
        answer[row] = (int*)malloc(groupSizes[i] * sizeof(int));

        while (column < groupSizes[i])
        {
            if(groupSizes[j] == groupSizes[i])
            {
                *(*(answer + row) + column) = j;
                check[j] = 1;
                column++;
            }
            j++;
        }
        row++;
    }

    *returnSize = row;
    return answer;   
}