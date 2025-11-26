/* Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record. */

#include <stdio.h>

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar(); // consume newline

    FILE *fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error creating file.");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        char name[100];
        int roll, marks;
        printf("Enter Name: ");
        fgets(name, sizeof(name), stdin);
        int len = 0;
        while (name[len] != '\0') len++;
        if (name[len-1] == '\n') name[len-1] = '\0';
        printf("Enter Roll Number: ");
        scanf("%d", &roll);
        printf("Enter Marks: ");
        scanf("%d", &marks);
        getchar(); // consume newline
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.");
        return 1;
    }

    char name[100];
    int roll, marks;
    while (fscanf(fp, "%s %d %d", name, &roll, &marks) != EOF) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}
