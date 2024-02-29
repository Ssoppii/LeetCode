char* decodeMessage(char* key, char* message) {
    int dictionary[26];
    memset(dictionary, -1, sizeof(dictionary));
    int t = 0;

    for (int i=0;i<strlen(key);i++) {
        if (key[i] != ' ') {
            if (dictionary[key[i] - 'a'] == -1) {
                dictionary[key[i] - 'a'] = t;
                t++;
            }
        }
    }

    for (int j=0;j<strlen(message);j++) {
        if (message[j] != ' ') message[j] = 'a' + dictionary[message[j]- 'a'];
    }
    return message;
}