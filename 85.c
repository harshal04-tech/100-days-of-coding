c
#include <stdio.h>

typedef enum {
    SUCCESS = 10,
    FAILURE,        // 11
    TIMEOUT         // 12
} Status;

int main(void) {
    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);

    return 0;
}