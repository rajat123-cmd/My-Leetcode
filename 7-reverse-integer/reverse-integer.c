int reverse(int x) {
    int rev = 0;

    while(x){
        int d = x % 10;

        if(rev > 214748364 || rev < -214748364)
            return 0;

        rev = rev*10 + d;
        x /= 10;
    }

    return rev;
}