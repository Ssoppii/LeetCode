/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decode(int* encoded, int encodedSize, int first, int* returnSize) {
    int* answer = (int*)malloc((encodedSize+1) * sizeof(int));
    answer[0] = first;
        
    for (int i=0;i<encodedSize;i++) {
        answer[i+1] = answer[i] ^ encoded[i];
    }
    
    *returnSize = encodedSize + 1;
            
    return answer;
}