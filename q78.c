/*
Q78: Find the sum of main diagonal elements for a square matrix.
*/
#include <stdio.h>

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    int r, c, i, j, sum = 0;
    scanf("%d %d", &r, &c);

    int a[r][c];
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    if (r == c) {
        for (i = 0; i < r; i++)
            sum += a[i][i];
        printf("%d", sum);
    } else {
        printf("Not a square matrix");
    }

    return 0;
}
