/* Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc(). */

#include <stdio.h>

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    char source[100], dest[100];
    printf("Enter source filename: ");
    scanf("%s", source);
    printf("Enter destination filename: ");
    scanf("%s", dest);

    FILE *src = fopen(source, "r");
    if (src == NULL) {
        printf("Error opening source file.");
        return 1;
    }

    FILE *dst = fopen(dest, "w");
    if (dst == NULL) {
        printf("Error creating destination file.");
        fclose(src);
        return 1;
    }

    int ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dst);
    }

    fclose(src);
    fclose(dst);

    printf("File copied successfully to %s", dest);

    return 0;
}
