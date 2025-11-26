/* Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output. */

#include <stdio.h>
#include <string.h>

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    char s[200];
    fgets(s, sizeof(s), stdin);

    int len = 0;
    while (s[len] != '\0' && s[len] != '\n') len++;

    int maxLen = 0;

    for (int i = 0; i < len; i++) {
        int visited[256] = {0}, currLen = 0;
        for (int j = i; j < len; j++) {
            if (visited[(unsigned char)s[j]] == 1)
                break;
            visited[(unsigned char)s[j]] = 1;
            currLen++;
        }
        if (currLen > maxLen)
            maxLen = currLen;
    }

    printf("%d", maxLen);

    return 0;
}
