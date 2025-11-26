/* Q89: Count frequency of a given character in a string. */

#include <stdio.h>

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    char str[200], ch;
    int i = 0, count = 0;

    fgets(str, sizeof(str), stdin);
    scanf("%c", &ch);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ch)
            count++;
        i++;
    }

    printf("%d", count);

    return 0;
}
