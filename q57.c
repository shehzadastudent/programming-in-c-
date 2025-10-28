#include <stdio.h>

/*
Q57: Find the sum of array elements.
*/

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    int n, sum = 0;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];   
    }

    printf("%d", sum);

    return 0;
}
