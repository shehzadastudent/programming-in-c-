/* Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content. */

#include <stdio.h>

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    char filename[100], text[500];
    printf("Enter filename: ");
    scanf("%s", filename);
    getchar();
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error opening file.");
        return 1;
    }

    fputs(text, fp);
    fclose(fp);

    printf("File updated successfully with appended text.");

    return 0;
}
