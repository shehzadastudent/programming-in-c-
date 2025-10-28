/*
Q80: Multiply two matrices.
*/
#include <stdio.h>

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    int r1, c1, r2, c2;
    scanf("%d %d", &r1, &c1);

    int a[r1][c1];
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    scanf("%d %d", &r2, &c2);

    int b[r2][c2];
    for(int i = 0; i < r2; i++)
        for(int j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    // Matrix multiplication is possible only when c1 == r2
    if(c1 != r2) {
        printf("Matrix multiplication not possible");
        return 0;
    }

    int result[r1][c2];

    // Initialize result matrix to 0
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c2; j++)
            result[i][j] = 0;

    // Multiplying matrices
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            for(int k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print result matrix
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
