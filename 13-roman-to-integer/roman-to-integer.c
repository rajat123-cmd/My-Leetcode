#include <string.h>

int valueOfRomanChar(char c) {
    if (c == 'I') return 1;
    else if (c == 'V') return 5;
    else if (c == 'X') return 10;
    else if (c == 'L') return 50;
    else if (c == 'C') return 100;
    else if (c == 'D') return 500;
    else if (c == 'M') return 1000;
    else return 0;
}

int romanToInt(char* s) {
    int total = 0;
    int length = strlen(s);

    for (int i = 0; i < length; i++) {
        int currentValue = valueOfRomanChar(s[i]);
        int nextValue = 0;

        if (i + 1 < length) {
            nextValue = valueOfRomanChar(s[i + 1]);
        }

        if (currentValue < nextValue)
            total -= currentValue;
        else
            total += currentValue;
    }

    return total;
}