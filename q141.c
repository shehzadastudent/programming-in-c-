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

    struct Student s;


    printf("Enter Name: ");
    scanf("%s", s.name);  // for simplicity, assuming single word name

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll_no);

    printf("Enter Marks: ");
    scanf("%d", &s.marks);

    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);

    return 0;
}
