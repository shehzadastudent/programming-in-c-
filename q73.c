/*
Q73: Find the sum of each row of a matrix and store it in an array.
*/
#include <stdio.h>

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    int r, c, i, j;
    scanf("%d %d", &r, &c);

    int a[r][c], rowSum[r];
    for (i = 0; i < r; i++) {
        rowSum[i] = 0;
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            rowSum[i] += a[i][j];
        }
    }

    for (i = 0; i < r; i++) printf("%d ", rowSum[i]);

    return 0;
}
