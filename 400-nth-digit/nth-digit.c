int findNthDigit(int n) {
    long digitLength = 1;
    long count = 9;
    long start = 1;

    while (n > digitLength * count) {
        n -= digitLength * count;
        digitLength++;
        count *= 10;
        start *= 10;
    }

    long number = start + (n - 1) / digitLength;
    int digitIndex = (n - 1) % digitLength;

    for (int i = digitLength - digitIndex - 1; i > 0; i--) {
        number /= 10;
    }

    return number % 10;
}