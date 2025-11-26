/* Q98: Print initials of a name with the surname displayed in full. */

#include <stdio.h>
#include <string.h>

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    char str[200], surname[100];
    fgets(str, sizeof(str), stdin);

    int i = 0, start = 0, wordCount = 0;

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ' ' || str[i+1] == '\0' || str[i+1] == '\n') {
            if (wordCount == 0) {
                printf("%c.", str[start]);
            } else if (str[i+1] == '\0' || str[i+1] == '\n') {
                int len = i - start + 1;
                strncpy(surname, str + start, len);
                surname[len] = '\0';
            } else {
                printf("%c.", str[start]);
            }
            wordCount++;
            start = i + 1;
        }
        i++;
    }

    printf(" %s", surname);

    return 0;
}
