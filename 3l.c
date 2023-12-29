#include <stdio.h>

int main() {
    // Declare variables
    float x, y;

    // Input coordinates of the point
    printf("Enter the coordinates of the point (x y): ");
    scanf("%f %f", &x, &y);

    // Check the position of the point
    if (x == 0 && y == 0) {
        printf("The point is on the origin.\n");
    } else if (x == 0) {
        printf("The point is on the Y-axis.\n");
    } else if (y == 0) {
        printf("The point is on the X-axis.\n");
    } else {
        printf("The point is neither on the X-axis nor on the Y-axis.\n");
    }

    return 0;
}
