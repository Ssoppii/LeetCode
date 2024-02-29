char * makeSmallestPalindrome(char * s){
    int i=0;
    int j=strlen(s)-1;

    while (i<j) {
        if (s[i] == s[j]) {
            i++;
            j--;
        }

        else {
            if (s[i] < s[j]) {
                s[j] = s[i];
                i++;
                j--;
            }
            else {
                s[i] = s[j];
                i++;
                j--;
            }
        }
    }
    return s;
}