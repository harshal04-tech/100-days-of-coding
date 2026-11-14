#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    struct Student s[MAX];
    int n, i, topIndex = 0;

    printf("Kitne students hain? ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX)
    {
        printf("Invalid number of students.\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Name: ");
        scanf(" %49[^\n]", s[i].name);
        printf("Roll no: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Highest marks dhundho
    for (i = 1; i < n; i++)
    {
        if (s[i].marks > s[topIndex].marks)
        {
            topIndex = i;
        }
    }

    printf("\n--- Topper ---\n");
    printf("Name  : %s\n", s[topIndex].name);
    printf("Roll  : %d\n", s[topIndex].roll);
    printf("Marks : %.2f\n", s[topIndex].marks);

    return 0;
}