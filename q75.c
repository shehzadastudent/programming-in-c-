/*
Q75: Add two matrices.
*/
#include <stdio.h>

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    int r1, c1, r2, c2, i, j;
    scanf("%d %d", &r1, &c1);

    int a[r1][c1];
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    scanf("%d %d", &r2, &c2);

    int b[r2][c2];
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    if (r1 == r2 && c1 == c2) {
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++)
                printf("%d ", a[i][j] + b[i][j]);
            printf("\n");
        }
    }

    return 0;
}
