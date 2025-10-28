#include <stdio.h>

/*
Q38: Write a program to find the sum of digits of a number.
*/

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    int n, sum = 0;
    scanf("%d", &n);

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    printf("%d", sum);
    return 0;
}
