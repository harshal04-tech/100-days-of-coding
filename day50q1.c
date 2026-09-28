// Change the date format from dd/04/yyyy to dd-Apr-yyyy
#include <stdio.h>

int main()
{
    char old_date[] = "12/04/2026";
    char new_date[20]; // Buffer to hold the new string

    int day, month, year;

    // Array of month abbreviations.
    // The first index [0] is left empty so month 1 maps to index 1 ("Jan"), month 4 to index 4 ("Apr"), etc.
    const char *month_names[] = {
        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    // 1. Parse the day, month, and year from the original string
    if (sscanf(old_date, "%d/%d/%d", &day, &month, &year) == 3)
    {

        // Validate the month to prevent array out-of-bounds errors
        if (month >= 1 && month <= 12)
        {

            // 2. Format the new string with hyphens and the month name
            // %02d ensures the day is printed with a leading zero if it's a single digit (e.g., "05")
            sprintf(new_date, "%02d-%s-%04d", day, month_names[month], year);

            printf("Original string: %s\n", old_date);
            printf("Converted string: %s\n", new_date);
        }
        else
        {
            printf("Error: Invalid month number.\n");
        }
    }
    else
    {
        printf("Error: Input string format is incorrect.\n");
    }

    return 0;
}