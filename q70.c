/*
Q70: Rotate an array to the right by k positions.
*/
#include <stdio.h>

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    int n, k, i;
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &k);

    k = k % n;
    int b[n];
    for (i = 0; i < n; i++) b[(i + k) % n] = a[i];

    for (i = 0; i < n; i++) printf("%d ", b[i]);

    return 0;
}
