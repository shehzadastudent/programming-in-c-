/* Q91: Remove all vowels from a string. */

#include <stdio.h>

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    char str[200], result[200];
    int i = 0, j = 0;

    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        char c = str[i];
        char ch = (c >= 'A' && c <= 'Z') ? c + 32 : c;

        if (!(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')) {
            result[j] = c;
            j++;
        }
        i++;
    }

    result[j] = '\0';

    printf("%s", result);

    return 0;
}
