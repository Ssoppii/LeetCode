char* firstPalindrome(char** words, int wordsSize) {
    // char* ans = (char*)malloc(sizeof(char) * 104);
        
    for (int i=0;i<wordsSize;i++) {
        bool is_palindrome = true;
        int length = strlen(words[i]);
        for (int j=0;j<length/2;j++) {
            if (words[i][j] != words[i][length-j-1]) {
                is_palindrome = false;
                break;
            }
        }
        if (is_palindrome == true) {
            char* ans = (char*)malloc(sizeof(char*) * length);
            ans = words[i];
            return ans;
        }
    }
    char* ans = "";         
    return ans;
}