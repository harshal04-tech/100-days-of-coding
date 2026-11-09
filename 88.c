
#include <stdio.h>

enum Days
{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main()
{

    enum Days d;

    char *names[] = {
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday",
        "Sunday"};

    for (d = Monday; d <= Sunday; d++)
    {
        printf("%s = %d\n", names[d], d);
    }

    return 0;
}