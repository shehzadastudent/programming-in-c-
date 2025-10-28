/*
Q77: Check if the elements on the diagonal of a matrix are distinct.
*/
#include <stdio.h>

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    int r, c, i, j, k, flag = 1;
    scanf("%d %d", &r, &c);

    int a[r][c];
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    if (r != c) flag = 0;
    else {
        for (i = 0; i < r; i++)
            for (k = i + 1; k < r; k++)
                if (a[i][i] == a[k][k])
                    flag = 0;
    }

    if (flag) printf("True");
    else printf("False");

    return 0;
}
