//Write a program to print all factors of a given number.
#include <stdio.h>

int main() {
	printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n"); 
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            printf("%d ", i);
    }
    return 0;
}
