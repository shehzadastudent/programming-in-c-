/* Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram". */

#include <stdio.h>
#include <string.h>

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    char s[100], t[100];
    fgets(s, sizeof(s), stdin);
    fgets(t, sizeof(t), stdin);

    int len1 = strlen(s);
    if (s[len1-1] == '\n') s[len1-1] = '\0';
    int len2 = strlen(t);
    if (t[len2-1] == '\n') t[len2-1] = '\0';

    if (strlen(s) != strlen(t)) {
        printf("Not Anagram");
        return 0;
    }

    int freq[26] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        freq[s[i]-'a']++;
        freq[t[i]-'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}
