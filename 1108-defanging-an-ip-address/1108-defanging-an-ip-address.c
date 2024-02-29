#include <string.h>

char * defangIPaddr(char * address){
    char* ans = (char*)malloc(1200*sizeof(char));
    int t = 0;

    for (int i=0;i<strlen(address);i++) {
        if (address[i] == '.') {
            ans[t++] = '[';
            ans[t++] = '.';
            ans[t++] = ']';
        }
        else ans[t++] = address[i];
    }
    ans[t++] = '\0';
    return ans;
}