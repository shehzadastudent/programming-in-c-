/* Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element. */

#include <stdio.h>

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxEndingHere = arr[0], maxSoFar = arr[0];
    for (int i = 1; i < n; i++) {
        if (maxEndingHere < 0)
            maxEndingHere = arr[i];
        else
            maxEndingHere += arr[i];

        if (maxEndingHere > maxSoFar)
            maxSoFar = maxEndingHere;
    }

    printf("%d", maxSoFar);

    return 0;
}
