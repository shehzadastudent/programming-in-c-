/*Write a program to take a number 
as input and print its equivalent binary representation.*/
#include <stdio.h>

int main() {
	printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");
    int n;
	int binary[32]; 
	int i = 0;
	
    scanf("%d", &n);
    
    if (n == 0) {
        printf("0");
        return 0;
    }
    while (n > 0) {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    return 0;
}
