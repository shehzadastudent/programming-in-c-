/*
Q63: Merge two arrays.
*/
#include <stdio.h>

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    int n1, n2, i;
    scanf("%d", &n1);
    int a[n1];
    for (i = 0; i < n1; i++) scanf("%d", &a[i]);

    scanf("%d", &n2);
    int b[n2], c[n1 + n2];
    for (i = 0; i < n2; i++) scanf("%d", &b[i]);

    for (i = 0; i < n1; i++) c[i] = a[i];
    for (i = 0; i < n2; i++) c[n1 + i] = b[i];

    for (i = 0; i < n1 + n2; i++) printf("%d ", c[i]);

    return 0;
}
