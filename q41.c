#include <stdio.h>

/*
Q41: Write a program to swap the first and last digit of a number.
*/

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    int n, first, last, temp, divisor = 1;
    scanf("%d", &n);

    temp = n;
    last = temp % 10;

    while (temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }
    first = temp;

    n = n % divisor;      
    n = n / 10;           

    int res = last * divisor + n * 10 + first;
    printf("%d", res);

    return 0;
}
