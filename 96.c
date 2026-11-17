#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Employee
{
    int id;
    char name[50];
    char department[30];
    float salary;
    struct Date joiningDate; // nested structure
};

int main()
{
    struct Employee emp;

    // Input
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);

    printf("Enter Name: ");
    scanf(" %49[^\n]", emp.name);

    printf("Enter Department: ");
    scanf(" %29[^\n]", emp.department);

    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    printf("Enter Joining Date (DD MM YYYY): ");
    scanf("%d %d %d", &emp.joiningDate.day,
          &emp.joiningDate.month,
          &emp.joiningDate.year);

    // Output
    printf("\n----- Employee Details -----\n");
    printf("ID           : %d\n", emp.id);
    printf("Name         : %s\n", emp.name);
    printf("Department   : %s\n", emp.department);
    printf("Salary       : %.2f\n", emp.salary);
    printf("Joining Date : %02d/%02d/%d\n",
           emp.joiningDate.day,
           emp.joiningDate.month,
           emp.joiningDate.year);

    return 0;
}