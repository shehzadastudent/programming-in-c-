//Write a program to check if a number is prime.
#include <stdio.h>

int main() {
	printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");
    int n, i, prime = 0;
    scanf("%d", &n);
    if (n <= 1) {
        printf("Not prime");
        return 0;
    }
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            prime = 1;
            break;
        }
    }
    if (prime == 0)
        printf("Prime");
    else
        printf("Not prime");
    return 0;
}
