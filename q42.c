#include <stdio.h>

/*
Q42: Write a program to check if a number is a perfect number.
*/

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    int n, sum = 0;
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        if (n % i == 0)
            sum += i;
    }

    if (sum == n)
        printf("Perfect number");
    else
        printf("Not perfect number");

    return 0;
}
