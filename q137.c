#include <stdio.h>
#include <string.h>

int main() {
    	
    printf("Name - Syed Multazam Ahmed Chishty\n");
    printf("SAP ID - 590028251\n");
    printf("Course - BCA\n");
    printf("Batch - B5\n");
    printf("---------------------------------------------\n");

  	
    enum Role { ADMIN, USER, GUEST };

    char input[20];
    printf("Enter role (ADMIN / USER / GUEST): ");
    scanf("%s", input);

    enum Role role;

 	
    if (strcmp(input, "ADMIN") == 0)
        role = ADMIN;
    else if (strcmp(input, "USER") == 0)
        role = USER;
    else if (strcmp(input, "GUEST") == 0)
        role = GUEST;
    else {
        printf("Invalid Role!\n");
        return 0;
    }
			
    switch (role) {
        case ADMIN:
            printf("Welcome Admin! Full access granted.\n");
            break;
        case USER:
            printf("Welcome User! Limited access granted.\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
    }

    return 0;
}
