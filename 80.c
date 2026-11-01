#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct Student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    FILE *fp;
    struct Student s;
    int n, i;

    printf("Kitne students ka record store karna hai? ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX)
    {
        printf("Invalid number of students.\n");
        return 1;
    }

    /* ---------- WRITE ---------- */
    fp = fopen("students.txt", "w");
    if (fp == NULL)
    {
        printf("File open nahi ho payi!\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Name (bina space ke): ");
        scanf("%49s", s.name);

        printf("Roll number: ");
        scanf("%d", &s.roll);

        printf("Marks: ");
        scanf("%f", &s.marks);

        fprintf(fp, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);
    printf("\nRecords file me save ho gaye.\n");

    /* ---------- READ ---------- */
    fp = fopen("students.txt", "r");
    if (fp == NULL)
    {
        printf("File read ke liye open nahi ho payi!\n");
        return 1;
    }

    printf("\n===== Student Records =====\n");
    printf("%-20s %-10s %-10s\n", "Name", "Roll No", "Marks");
    printf("------------------------------------------\n");

    while (fscanf(fp, "%49s %d %f", s.name, &s.roll, &s.marks) == 3)
    {
        printf("%-20s %-10d %-10.2f\n", s.name, s.roll, s.marks);
    }

    fclose(fp);
    return 0;
}