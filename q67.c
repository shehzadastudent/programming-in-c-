/*
Q67: Insert an element in an array at a given position.
*/
#include <stdio.h>

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    int n, pos, x, i;
    scanf("%d", &n);

    int a[n + 1];
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    scanf("%d %d", &pos, &x);

    for (i = n; i > pos; i--) a[i] = a[i - 1];
    a[pos] = x;

    for (i = 0; i <= n; i++) printf("%d ", a[i]);

    return 0;
}
