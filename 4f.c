#include <stdio.h>

int main() {
    float weight;

    // Input weight from the user
    printf("Enter the weight of the boxer in pounds: ");
    scanf("%f", &weight);

    // Determine the boxer's weight class
    if (weight < 115) {
        printf("Boxer Class: Flyweight\n");
    } else if (weight >= 115 && weight <= 121) {
        printf("Boxer Class: Bantamweight\n");
    } else if (weight >= 122 && weight <= 153) {
        printf("Boxer Class: Featherweight\n");
    } else if (weight >= 154 && weight <= 189) {
        printf("Boxer Class: Middleweight\n");
    } else {
        printf("Boxer Class: Heavyweight\n");
    }

    return 0;
}
