int findLUSlength(char* a, char* b) {
    if (strlen(a) != strlen(b)) {
        return strlen(a) > strlen(b) ? strlen(a) : strlen(b);
    }
    else {
        int j = 1;
        for (int i = 0; a[i] == b[i] && i < strlen(a);i++) {
            j++;
        }
        if (j < strlen(a)) {
         strlen(a);
            return strlen(a);
        }
        else {
            return -1;
        }

    }