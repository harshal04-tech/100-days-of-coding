#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("numbers.txt", "r");
    if (fp == NULL)
    {
        perror("Error opening numbers.txt");
        return 1;
    }

    long long sum = 0;
    long count = 0;
    int num;

    while (fscanf(fp, "%d", &num) == 1)
    { /* skips spaces/newlines automatically */
        sum += num;
        count++;
    }
    fclose(fp);

    if (count == 0)
    {
        printf("No integers found in numbers.txt\n");
        return 0;
    }

    printf("Count   : %ld\n", count);
    printf("Sum     : %lld\n", sum);
    printf("Average : %.2f\n", (double)sum / count);
    return 0;
}