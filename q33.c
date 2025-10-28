//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>

int main() {
	printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");
    int n, original, sum = 0, digits = 0, temp;
    scanf("%d", &n);
    original = n;
    temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp > 0) {
        int r = temp % 10;
        sum += pow(r, digits);
        temp /= 10;
    }
    if (sum == original)
        printf("Armstrong");
    else
        printf("Not Armstrong");
    return 0;
}
