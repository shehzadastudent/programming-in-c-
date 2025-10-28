#include <stdio.h>

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5\n");
    printf("---------------------------------------------\n");

    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swapping without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swap: %d %d\n", a, b);

    return 0;
}
