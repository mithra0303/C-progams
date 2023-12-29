#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables
    double side1, side2, side3, s, area;

    // Input lengths of three sides
    printf("Enter the length of side 1: ");
    scanf("%lf", &side1);

    printf("Enter the length of side 2: ");
    scanf("%lf", &side2);

    printf("Enter the length of side 3: ");
    scanf("%lf", &side3);

    // Check if the input forms a valid triangle
    if (side1 + side2 > side3 && side2 + side3 > side1 && side3 + side1 > side2) {
        // Calculate semi-perimeter
        s = (side1 + side2 + side3) / 2;

        // Calculate area using Heron's formula
        area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

        // Display the result
        printf("Area of the triangle: %.2f\n", area);
    } else {
        printf("Invalid input. The given sides do not form a valid triangle.\n");
    }

    return 0;
}
