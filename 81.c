#include <stdio.h>

enum Day
{
    SUNDAY,    // 0
    MONDAY,    // 1
    TUESDAY,   // 2
    WEDNESDAY, // 3
    THURSDAY,  // 4
    FRIDAY,    // 5
    SATURDAY   // 6
};

int main()
{
    const char *names[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY",
        "THURSDAY", "FRIDAY", "SATURDAY"};

    enum Day d;

    printf("%-12s %s\n", "Day", "Value");
    printf("---------------------\n");

    for (d = SUNDAY; d <= SATURDAY; d++)
    {
        printf("%-12s %d\n", names[d], d);
    }

    return 0;
}