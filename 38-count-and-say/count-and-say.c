#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* countAndSay(int n) {
    char *result = (char*)malloc(5000);
    strcpy(result, "1");

    for(int i = 2; i <= n; i++) {
        char temp[5000] = "";
        int len = strlen(result);
        int count = 1;
        int k = 0;

        for(int j = 1; j <= len; j++) {
            if(j < len && result[j] == result[j-1]) {
                count++;
            } else {
                k += sprintf(temp + k, "%d%c", count, result[j-1]);
                count = 1;
            }
        }

        strcpy(result, temp);
    }

    return result;
}