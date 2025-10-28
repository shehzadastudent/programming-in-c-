#include <stdio.h>

/*
Q36: Write a program to find the HCF (GCD) of two numbers.
*/

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    int a, b;
    scanf("%d %d", &a, &b);

    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    printf("%d", a);
    return 0;
}
