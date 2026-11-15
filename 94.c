#include <stdio.h>

struct Student
{
    int roll_no;
    char name[50];
    float marks;
};

// Structure ko const pointer se accept karna (efficient + safe)
void printStudent(const struct Student *s)
{
    printf("Roll No : %d\n", s->roll_no);
    printf("Name    : %s\n", s->name);
    printf("Marks   : %.2f\n", s->marks);
}

int main(void)
{
    struct Student s1 = {101, "Harshal", 87.5f};

    printStudent(&s1);

    return 0;
}