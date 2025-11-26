/* Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters. */

#include <stdio.h>
#include <ctype.h>

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    FILE *fp = fopen("text.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.");
        return 1;
    }

    int ch, vowels = 0, consonants = 0;
    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha(ch)) {
            char lower = tolower(ch);
            if (lower=='a'||lower=='e'||lower=='i'||lower=='o'||lower=='u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    printf("Vowels: %d\nConsonants: %d", vowels, consonants);

    return 0;
}
