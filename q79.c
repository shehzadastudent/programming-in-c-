/*
Q79: Perform diagonal traversal of a matrix.
*/
#include <stdio.h>

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    int r, c, i, j;
    scanf("%d %d", &r, &c);
    int a[r][c];

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    
    for (int start = 0; start < r + c - 1; start++) {
        
        int row = (start < c) ? 0 : start - c + 1;
        int col = (start < c) ? start : c - 1;

        
        while (row < r && col >= 0) {
            printf("%d ", a[row][col]);
            row++;
            col--;
        }
    }

    return 0;
}
