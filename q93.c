/* Q93: Check if two strings are anagrams of each other. */

#include <stdio.h>

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    char str1[100], str2[100];
    int freq1[26] = {0}, freq2[26] = {0}, i = 0;

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    while (str1[i] != '\0' && str1[i] != '\n') {
        if (str1[i] >= 'a' && str1[i] <= 'z')
            freq1[str1[i]-'a']++;
        i++;
    }

    i = 0;
    while (str2[i] != '\0' && str2[i] != '\n') {
        if (str2[i] >= 'a' && str2[i] <= 'z')
            freq2[str2[i]-'a']++;
        i++;
    }

    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");
    return 0;
}
