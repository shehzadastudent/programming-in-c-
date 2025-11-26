/* Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt. */

#include <stdio.h>
#include <ctype.h>

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    FILE *in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error opening input.txt");
        return 1;
    }

    FILE *out = fopen("output.txt", "w");
    if (out == NULL) {
        printf("Error creating output.txt");
        fclose(in);
        return 1;
    }

    int ch;
    while ((ch = fgetc(in)) != EOF) {
        fputc(toupper(ch), out);
    }

    fclose(in);
    fclose(out);

    printf("Text converted to uppercase and written to output.txt");

    return 0;
}
