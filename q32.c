//Write a program to check if a number is a palindrome.
#include <stdio.h>

int main() {
	printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");
    int n, original, reverse = 0, rem;
    scanf("%d", &n);
    original = n;
    while (n > 0) {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n /= 10;
    }
    if (original == reverse)
        printf("Palindrome");
    else
        printf("Not palindrome");
    return 0;
}
