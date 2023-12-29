#include <stdio.h>

int main() {
    // Declare variables
    float x1, y1, x2, y2, x3, y3;

    // Input coordinates of three points
    printf("Enter the coordinates of point 1 (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter the coordinates of point 2 (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    printf("Enter the coordinates of point 3 (x3 y3): ");
    scanf("%f %f", &x3, &y3);

    // Check if the points are collinear
    if ((y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1)) {
        printf("The three points are collinear.\n");
    } else {
        printf("The three points are not collinear.\n");
    }

    return 0;
}
