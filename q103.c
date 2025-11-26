/* Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1. */

#include <stdio.h>

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    int n;
    scanf("%d", &n);
    int nums[n];
    int total = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        total += nums[i];
    }

    int leftSum = 0, pivot = -1;
    for (int i = 0; i < n; i++) {
        if (leftSum == total - leftSum - nums[i]) {
            pivot = i;
            break;
        }
        leftSum += nums[i];
    }

    printf("%d", pivot);

    return 0;
}
