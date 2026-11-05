#include <stdio.h>

typedef enum
{
    SUCCESS,
    FAILURE,
    TIMEOUT
} Status;

void print_status(Status s)
{
    switch (s)
    {
    case SUCCESS:
        printf("Operation completed successfully!\n");
        break;
    case FAILURE:
        printf("Operation failed.\n");
        break;
    case TIMEOUT:
        printf("Operation timed out.\n");
        break;
    default:
        printf("Unknown status.\n");
    }
}

int main(void)
{
    Status result = SUCCESS;
    print_status(result);

    result = FAILURE;
    print_status(result);

    result = TIMEOUT;
    print_status(result);

    return 0;
}