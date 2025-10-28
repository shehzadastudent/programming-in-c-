#include <stdio.h>
int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5\n");
    printf("---------------------------------------------\n");

    float num1, num2;
    
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("\nSum = %.2f", num1 + num2);
    printf("\nDifference = %.2f", num1 - num2);
    printf("\nProduct = %.2f", num1 * num2);

    if (num2 != 0) {
        printf("\nQuotient = %.2f\n", num1 / num2);
    } else {
        printf("\nQuotient = Division by zero is not allowed!\n");
    }

    return 0;
}
