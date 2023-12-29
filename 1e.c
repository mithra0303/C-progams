#include <stdio.h>

int main() {
    // Declare variables
    float length, breadth, radius;
    float rectangleArea, rectanglePerimeter, circleArea, circleCircumference;

    // Input for rectangle
    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    printf("Enter breadth of rectangle: ");
    scanf("%f", &breadth);

    // Input for circle
    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    // Calculate rectangle area and perimeter
    rectangleArea = length * breadth;
    rectanglePerimeter = 2 * (length + breadth);

    // Calculate circle area and circumference
    circleArea = 3.1415 * radius * radius;
    circleCircumference = 2 * 3.1415 * radius;

    // Display the results
    printf("\nRectangle:\n");
    printf("Area: %.2f\n", rectangleArea);
    printf("Perimeter: %.2f\n", rectanglePerimeter);

    printf("\nCircle:\n");
    printf("Area: %.2f\n", circleArea);
    printf("Circumference: %.2f\n", circleCircumference);

    return 0;
}
