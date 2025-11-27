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

    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for(int i = 0; i < n; i++) {
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll_no);
        printf("Enter Marks: ");
        scanf("%d", &s[i].marks);
    }

    int max_index = 0;
    for(int i = 1; i < n; i++) {
        if(s[i].marks > s[max_index].marks) {
            max_index = i;
        }
    }

    printf("Topper: %s (Marks: %d)\n", s[max_index].name, s[max_index].marks);

    return 0;
}
