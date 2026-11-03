#include <stdio.h>

enum TrafficLight
{
    RED,    // 0
    YELLOW, // 1
    GREEN   // 2
};

void showAction(enum TrafficLight light)
{
    switch (light)
    {
    case RED:
        printf("Stop\n");
        break;
    case YELLOW:
        printf("Wait\n");
        break;
    case GREEN:
        printf("Go\n");
        break;
    default:
        printf("Invalid light\n");
    }
}

int main()
{
    enum TrafficLight light;

    /* Teeno lights ke liye action print karo */
    for (light = RED; light <= GREEN; light++)
    {
        printf("Value %d -> ", light);
        showAction(light);
    }

    /* User input wala version */
    int choice;
    printf("\nLight chuno (0 = RED, 1 = YELLOW, 2 = GREEN): ");
    scanf("%d", &choice);

    light = (enum TrafficLight)choice;
    printf("Action: ");
    showAction(light);

    return 0;
}