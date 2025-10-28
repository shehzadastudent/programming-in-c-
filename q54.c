#include <stdio.h>

/*
Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    int i, j, space;

    for (i = 1; i <= 7; i += 2) {
        for (space = 1; space <= (7 - i) / 2; space++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    for (i = 5; i >= 1; i -= 2) {
        for (space = 1; space <= (7 - i) / 2; space++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
