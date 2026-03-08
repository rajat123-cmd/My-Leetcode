#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int reverse(int x) {
    char str[20];
    sprintf(str, "%d", x);

    int sign = 1;
    if(str[0] == '-') {
        sign = -1;
        memmove(str, str+1, strlen(str));
    }

    int len = strlen(str);

    for(int i = 0; i < len/2; i++) {
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }

    long result = atol(str) * sign;

    if(result > 2147483647 || result < -2147483648)
        return 0;

    return (int)result;
}