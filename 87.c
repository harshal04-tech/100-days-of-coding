#include <stdio.h>

// User roles ke liye enum
enum Role {
    ADMIN = 1,
    USER,
    GUEST
};

// Role ke hisaab se message dikhane wala function
void displayMessage(enum Role role) {
    switch (role) {
        case ADMIN:
            printf("Welcome, Admin! You have full access to the system.\n");
            break;

        case USER:
            printf("Welcome, User! You can view and edit your own data.\n");
            break;

        case GUEST:
            printf("Welcome, Guest! You have read-only access.\n");
            break;

        default:
            printf("Unknown role! Access denied.\n");
    }
}

int main() {
    int choice;

    printf("=== Select Your Role ===\n");
    printf("%d. ADMIN\n", ADMIN);
    printf("%d. USER\n", USER);
    printf("%d. GUEST\n", GUEST);
    printf("Enter your choice: ");
    scanf("%d", &choice);

    displayMessage((enum Role)choice);

    return 0;
}