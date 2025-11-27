#include <stdio.h>
#include <string.h>

int main() {
    
    printf("Name - Syed Multazam Ahmed Chishty\n");
    printf("SAP ID - 590028251\n");
    printf("Course - BCA\n");
    printf("Batch - B5\n");
    printf("---------------------------------------------\n");

    
    enum Menu { ADD, SUBTRACT, MULTIPLY };

    char choice[15];
    int a, b;

    printf("Enter operation (ADD / SUBTRACT / MULTIPLY) followed by two numbers:\n");
    scanf("%s %d %d", choice, &a, &b);

    enum Menu op;


    if (strcmp(choice, "ADD") == 0)
        op = ADD;
    else if (strcmp(choice, "SUBTRACT") == 0)
        op = SUBTRACT;
    else if (strcmp(choice, "MULTIPLY") == 0)
        op = MULTIPLY;
    else {
        printf("Invalid operation!\n");
        return 0;
    }


    switch (op) {
        case ADD:
            printf("%d\n", a + b);
            break;

        case SUBTRACT:
            printf("%d\n", a - b);
            break;

        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }

    return 0;
}
