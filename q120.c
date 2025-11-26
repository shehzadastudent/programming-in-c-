/* Q120: Write a program to take a string input. Change it to sentence case. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    char str[500];
    fgets(str, sizeof(str), stdin);

    int len = strlen(str);
    if (str[len-1] == '\n') str[len-1] = '\0';

    int capitalize = 1;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            capitalize = 1;
        } else if (capitalize && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capitalize = 0;
        } else {
            str[i] = tolower(str[i]);
        }
    }

    printf("%s", str);

    return 0;
}
