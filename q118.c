/* Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number */

#include <stdio.h>

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    int n;
    scanf("%d", &n);
    int arr[n];
    int totalSum = n * (n + 1) / 2;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("%d", totalSum - sum);

    return 0;
}
