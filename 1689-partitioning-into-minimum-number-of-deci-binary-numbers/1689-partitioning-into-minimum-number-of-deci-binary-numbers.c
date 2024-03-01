int minPartitions(char* n) {
    int ans = 0;
    for (int i=0;i<strlen(n);i++) {
        if (((int)(n[i]) - 48) > ans) ans = ((int)(n[i]) - 48);
    }
    return ans;
}