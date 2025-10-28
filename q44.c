#include <stdio.h>

/*
Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
*/

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    int n, num = 1, den = 2;
    float sum = 0.0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += (float)num / den;
        num += 2;
        den += 2;
    }

    printf("Approximate sum: %.1f", sum);
    return 0;
}
