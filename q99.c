/* Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy. */

#include <stdio.h>
#include <string.h>

int main() {
    printf("Name - Syed Multazam Ahmed Chishty\nSAP ID - 590028251\nCourse - BCA\nBatch - B5");
    printf("\n---------------------------------------------\n");

    char date[20], day[3], month[3], year[5];
    fgets(date, sizeof(date), stdin);

    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date+3, 2);
    month[2] = '\0';
    strncpy(year, date+6, 4);
    year[4] = '\0';

    if (strcmp(month, "04") == 0)
        printf("%s-Apr-%s", day, year);

    return 0;
}
