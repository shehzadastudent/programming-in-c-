#include <stdio.h>

/*
Q37: Write a program to find the LCM of two numbers.
*/

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    int a, b, x, y;
    scanf("%d %d", &a, &b);
    x = a;
    y = b;

    while (x != y) {
        if (x < y)
            x += a;
        else
            y += b;
    }

    printf("%d", x);
    return 0;
}
