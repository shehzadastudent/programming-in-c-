#include <stdio.h>

/*
Q39: Write a program to find the product of odd digits of a number.
*/

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    int n, digit, product = 1, found = 0;
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;
        if (digit % 2 != 0) {
            product *= digit;
            found = 1;
        }
        n /= 10;
    }

    if (!found)
        product = 1;

    printf("%d", product);
    return 0;
}
