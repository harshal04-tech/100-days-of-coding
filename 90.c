#include <stdio.h>

// Enum for gender
enum Gender
{
    MALE,
    FEMALE,
    OTHER
};

// Struct with enum as a member
struct Person
{
    char name[50];
    int age;
    enum Gender gender;
};

// Helper function: enum ko string me convert karta hai
const char *getGenderString(enum Gender g)
{
    switch (g)
    {
    case MALE:
        return "Male";
    case FEMALE:
        return "Female";
    case OTHER:
        return "Other";
    default:
        return "Unknown";
    }
}

int main()
{
    struct Person p1 = {"Harshal", 19, MALE};
    struct Person p2 = {"Simran", 20, FEMALE};

    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("Gender: %s\n\n", getGenderString(p1.gender));

    printf("Name: %s\n", p2.name);
    printf("Age: %d\n", p2.age);
    printf("Gender: %s\n", getGenderString(p2.gender));

    return 0;
}