#include <stdio.h>

/*
Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*
*/

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    int stars[] = {1, 3, 5, 3, 1};
    int blocks = 5;

    for (int i = 0; i < blocks; i++) {
        for (int j = 0; j < stars[i]; j++) {
            printf("*\n");
        }
        if (i != blocks - 1)
            printf("\n");
    }

    return 0;
}
