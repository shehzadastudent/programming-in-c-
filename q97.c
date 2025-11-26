/* Q97: Print the initials of a name. */

#include <stdio.h>

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    char str[200];
    fgets(str, sizeof(str), stdin);

    int i = 0;
    if (str[0] != '\n' && str[0] != ' ')
        printf("%c.", str[0]);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0' && str[i+1] != '\n')
            printf("%c.", str[i+1]);
        i++;
    }

    return 0;
}
