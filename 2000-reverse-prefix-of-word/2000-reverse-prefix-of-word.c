char* reversePrefix(char* word, char ch) {
    int idx = -1;
    for (int i=0;i<strlen(word);i++) {
        if (word[i] == ch) {
            idx = i;
            break;
        }
    }
    if (idx > 0) {
        for (int i=0,j=idx; i <= j; i++, j--) { 
            char c = word[i]; 
            word[i] = word[j]; 
            word[j] = c; 
    }
        return word;
    }
    else {
        return word;
    }
}