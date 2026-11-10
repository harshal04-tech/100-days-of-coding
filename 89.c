#include <stdio.h>

enum Day { MON, TUE, WED, THU, FRI, SAT, SUN };

enum Level { LOW = 10, MEDIUM = 20, HIGH = 30 };

enum Mixed { A = 5, B, C, D = 100, E };

int main(void) {
    enum Day today = WED;

    // 1. Default values: 0 se start hote hain
    printf("MON = %d\n", MON);
    printf("TUE = %d\n", TUE);
    printf("WED = %d\n", WED);
    printf("SUN = %d\n", SUN);

    // 2. Enum variable ko %d se print karo -> integer hi aayega
    printf("\ntoday (WED) = %d\n", today);

    // 3. Custom values
    printf("\nLOW = %d, MEDIUM = %d, HIGH = %d\n", LOW, MEDIUM, HIGH);

    // 4. Auto-increment after a custom value
    printf("\nA = %d, B = %d, C = %d, D = %d, E = %d\n", A, B, C, D, E);

    // 5. Enum ko integer ki tarah use karna (arithmetic)
    printf("\nWED + 10 = %d\n", WED + 10);
    int x = SAT;
    printf("int x = SAT -> x = %d\n", x);

    // 6. Size: enum usually int ke barabar hota hai
    printf("\nsizeof(enum Day) = %zu bytes\n", sizeof(enum Day));
    printf("sizeof(int)      = %zu bytes\n", sizeof(int));

    return 0;
}