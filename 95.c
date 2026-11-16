#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

typedef struct
{
    int roll_no;
    char name[50];
    float marks;
} Student;

// Top student ki details struct ke form mein return karta hai
Student getTopStudent(Student students[], int n)
{
    Student top = students[0];

    for (int i = 1; i < n; i++)
    {
        if (students[i].marks > top.marks)
        {
            top = students[i];
        }
    }
    return top;
}

int main()
{
    Student students[] = {
        {101, "Aman", 78.5},
        {102, "Simran", 91.0},
        {103, "Rohit", 85.25},
        {104, "Kiran", 88.0}};
    int n = sizeof(students) / sizeof(students[0]);

    Student top = getTopStudent(students, n);

    printf("Top Student Details\n");
    printf("Roll No : %d\n", top.roll_no);
    printf("Name    : %s\n", top.name);
    printf("Marks   : %.2f\n", top.marks);

    return 0;
}