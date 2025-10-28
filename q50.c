#include <stdio.h>

/*
Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
*/

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    for (int i = 0; i < 5; i++) {
        for (int s = 0; s < i; s++) {
            printf(" ");
        }
        for (int j = 5; j > i; j--) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
