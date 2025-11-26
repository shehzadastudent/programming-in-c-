/* Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both. */

#include <stdio.h>

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    FILE *fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.");
        return 1;
    }

    int num, sum = 0, count = 0;
    while (fscanf(fp, "%d", &num) != EOF) {
        sum += num;
        count++;
    }

    fclose(fp);

    double average = (count > 0) ? (double)sum / count : 0.0;

    printf("Sum = %d\nAverage = %.2f", sum, average);

    return 0;
}
