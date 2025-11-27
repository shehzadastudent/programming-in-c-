#include <stdio.h>
#include <string.h>

int main() {
    
    printf("Name - Syed Multazam Ahmed Chishty\n");
    printf("SAP ID - 590028251\n");
    printf("Course - BCA\n");
    printf("Batch - B5\n");
    printf("---------------------------------------------\n");

  
    enum Status { SUCCESS, FAILURE, TIMEOUT };

    char input[20];
    printf("Enter status (SUCCESS / FAILURE / TIMEOUT): ");
    scanf("%s", input);

    enum Status state;

    if (strcmp(input, "SUCCESS") == 0)
        state = SUCCESS;
    else if (strcmp(input, "FAILURE") == 0)
        state = FAILURE;
    else if (strcmp(input, "TIMEOUT") == 0)
        state = TIMEOUT;
    else {
        printf("Invalid input!\n");
        return 0;
    }
    switch (state) {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
    }

    return 0;
}
