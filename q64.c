/*
Q64: Find the digit that occurs the most times in an integer number.
*/
#include <stdio.h>

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    long long n;
    scanf("%lld", &n);

    int freq[10] = {0}, digit, maxDigit = 0, i;
    if (n < 0) n = -n;

    while (n > 0) {
        digit = n % 10;
        freq[digit]++;
        n /= 10;
    }

    for (i = 1; i < 10; i++) {
        if (freq[i] > freq[maxDigit]) maxDigit = i;
    }

    printf("%d", maxDigit);

    return 0;
}
