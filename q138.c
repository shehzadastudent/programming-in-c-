#include <stdio.h>

int main() {
    // Mandatory Header
    printf("Name - Syed Multazam Ahmed Chishty\n");
    printf("SAP ID - 590028251\n");
    printf("Course - BCA\n");
    printf("Batch - B5\n");
    printf("---------------------------------------------\n");

    // Enum for traffic lights
    enum Light { RED, YELLOW, GREEN };

    // Array of enum names for printing
    const char *names[] = {"RED", "YELLOW", "GREEN"};

    // Loop through enum values
    for (int i = RED; i <= GREEN; i++) {
        printf("%s = %d\n", names[i], i);
    }

    return 0;
}
