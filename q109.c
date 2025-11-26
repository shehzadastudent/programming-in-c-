/* Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k. */

#include <stdio.h>

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k);

    int maxSum = 0;
    for (int i = 0; i < k; i++)
        maxSum += arr[i];

    int windowSum = maxSum;
    for (int i = k; i < n; i++) {
        windowSum = windowSum - arr[i - k] + arr[i];
        if (windowSum > maxSum)
            maxSum = windowSum;
    }

    printf("%d", maxSum);

    return 0;
}
