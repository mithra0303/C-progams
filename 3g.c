#include <stdio.h>

int main() {
    // Declare variables
    float angle1, angle2, angle3;

    // Input angles
    printf("Enter the first angle of the triangle: ");
    scanf("%f", &angle1);

    printf("Enter the second angle of the triangle: ");
    scanf("%f", &angle2);

    printf("Enter the third angle of the triangle: ");
    scanf("%f", &angle3);

    // Check if the triangle is valid
    if (angle1 + angle2 + angle3 == 180) {
        printf("The triangle is valid.\n");
    } else {
        printf("The triangle is not valid. The sum of angles is not equal to 180 degrees.\n");
    }

    return 0;
}
