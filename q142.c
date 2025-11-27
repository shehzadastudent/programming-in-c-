#include <stdio.h>

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\n");
    printf("SAP ID - 590028251\n");
    printf("Course - BCA\n");
    printf("Batch - B5\n");
    printf("---------------------------------------------\n");

    struct Student {
        char name[50];
        int roll_no;
        int marks;
    };

    struct Student s[5];

    for(int i = 0; i < 5; i++) {
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll_no);
        printf("Enter Marks: ");
        scanf("%d", &s[i].marks);
    }

    printf("\nAll Students Details:\n");
    printf("Name\tRoll\tMarks\n");

    for(int i = 0; i < 5; i++) {
        printf("%s\t%d\t%d\n", s[i].name, s[i].roll_no, s[i].marks);
    }

    return 0;
}
