char* truncateSentence(char* s, int k) {
    for (int i=0;i<strlen(s);i++) {
        if (s[i] == ' ') k--;
        if (k == 0) {
            s[i] = '\0';
            break;
        }
    }
    return s;
}