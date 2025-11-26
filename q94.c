/* Q94: Find the longest word in a sentence. */

#include <stdio.h>
#include <string.h>

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0;

    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            if (j > maxLen) {
                maxLen = j;
                strcpy(longest, word);
            }
            j = 0;
            if (str[i] == '\0' || str[i] == '\n')
                break;
        }
        i++;
    }

    printf("%s", longest);
    return 0;
}
