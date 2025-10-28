/*
Q65: Search in a sorted array using binary search.
*/
#include <stdio.h>

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    int n, key, low = 0, high, mid, i;
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    scanf("%d", &key);
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;
        if (a[mid] == key) {
            printf("%d", mid);
            return 0;
        }
        else if (a[mid] < key) low = mid + 1;
        else high = mid - 1;
    }

    printf("-1");
    return 0;
}
