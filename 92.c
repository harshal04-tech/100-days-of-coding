#include <stdio.h>
#include <string.h>

#define N 5

struct Student
{
    char name[50];
    int roll_no;
    float marks;
};

int main()
{
    struct Student s[N];
    int i;

    // Input
    for (i = 0; i < N; i++)
    {
        printf("\n--- Student %d ---\n", i + 1);

        printf("Enter name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);

        // scanf ke baad bacha hua '\n' clear karo
        getchar();
    }

    // Output
    printf("\n========== All Students ==========\n");
    printf("%-5s %-20s %-10s %-8s\n", "No.", "Name", "Roll No", "Marks");
    printf("------------------------------------------------\n");

    for (i = 0; i < N; i++)
    {
        printf("%-5d %-20s %-10d %-8.2f\n",
               i + 1, s[i].name, s[i].roll_no, s[i].marks);
    }

    return 0;
}