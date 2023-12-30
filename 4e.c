#include <stdio.h>

int main() {
    float side1, side2, side3;

    // Input sides of the triangle from the user
    printf("Enter the three sides of the triangle:\n");
    printf("Side 1: ");
    scanf("%f", &side1);
    printf("Side 2: ");
    scanf("%f", &side2);
    printf("Side 3: ");
    scanf("%f", &side3);

    // Check if the triangle is valid
    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {
        // Check the type of triangle
        if (side1 == side2 && side2 == side3) {
            printf("The triangle is an equilateral triangle.\n");
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            printf("The triangle is an isosceles triangle.\n");
        } else if ((side1 * side1 + side2 * side2 == side3 * side3) ||
                   (side1 * side1 + side3 * side3 == side2 * side2) ||
                   (side2 * side2 + side3 * side3 == side1 * side1)) {
            printf("The triangle is a right-angled triangle.\n");
        } else {
            printf("The triangle is a scalene triangle.\n");
        }
    } else {
        printf("The triangle is not valid.\n");
    }

    return 0;
}
