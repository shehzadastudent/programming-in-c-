#include <stdio.h>

/*
Q40: Write a program to find the 1’s complement of a binary number and print it.
*/

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    char bin[100];
    scanf("%s", bin);

    for (int i = 0; bin[i] != '\0'; i++) {
        if (bin[i] == '0')
            bin[i] = '1';
        else if (bin[i] == '1')
            bin[i] = '0';
    }

    printf("%s", bin);
    return 0;
}
