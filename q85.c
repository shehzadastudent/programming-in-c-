/* Q85: Reverse a string. */

#include <stdio.h>

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    char str[100];
    int len = 0, i;

    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0' && str[len] != '\n')
        len++;

    for (i = len - 1; i >= 0; i--)
        printf("%c", str[i]);

    return 0;
}
