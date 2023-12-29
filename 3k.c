#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables
    float centerX, centerY, radius, x, y, distance;

    // Input coordinates of the center and radius of the circle
    printf("Enter the coordinates of the center of the circle (x y): ");
    scanf("%f %f", &centerX, &centerY);

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Input coordinates of the point
    printf("Enter the coordinates of the point (x y): ");
    scanf("%f %f", &x, &y);

    // Calculate the distance between the center and the point
    distance = sqrt(pow((x - centerX), 2) + pow((y - centerY), 2));

    // Check the position of the point relative to the circle
    if (distance < radius) {
        printf("The point is inside the circle.\n");
    } else if (distance == radius) {
        printf("The point is on the circle.\n");
    } else {
        printf("The point is outside the circle.\n");
    }

    return 0;
}
