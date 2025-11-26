/* Q86: Check if a string is a palindrome. */

#include <stdio.h>

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    char str[100];
    int i = 0, j = 0, flag = 1;

    fgets(str, sizeof(str), stdin);

    while (str[j] != '\0' && str[j] != '\n')
        j++;

    j--;

    while (i < j) {
        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
        i++;
        j--;
    }

    if (flag == 1)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
