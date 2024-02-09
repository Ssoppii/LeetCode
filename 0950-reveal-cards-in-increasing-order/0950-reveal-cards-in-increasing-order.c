/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int compare(void const *a, void const *b) {
    return *(int *)b - *(int *)a;
}

void rotate(int* arr, int size) {
    int temp = arr[size-1];
    for (int i=size;i>0;i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
}

int* deckRevealedIncreasing(int* deck, int deckSize, int* returnSize) {
    qsort(deck, deckSize, sizeof(int), compare);
    int* answer = (int*)malloc(sizeof(int) * (deckSize+1));
    *returnSize = deckSize;

    int index = 0;
    for (int i=0;i<deckSize;i++) {
        if (index > 0) {
            // Shift elements to the right
            rotate(answer, index);
            index++;
            for (int j=index;j>0;j--) {
                answer[j] = answer[j-1];
            }
        }
        else {
            index++;
        }
        answer[0] = deck[i];
        

        // printf("%d: ", deck[i]);
        // for (int k = 0; k < deckSize; k++) {
        //     printf("%d ", answer[k]);
        // }
        // printf("\n");
    }
    return answer;
}