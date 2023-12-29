#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables
    double x, y, r, theta;

    // Input Cartesian coordinates
    printf("Enter the x-coordinate: ");
    scanf("%lf", &x);

    printf("Enter the y-coordinate: ");
    scanf("%lf", &y);

    // Calculate polar coordinates
    r = sqrt(x * x + y * y); // r = sqrt(x^2 + y^2)
    
    // Check for division by zero before calculating theta
    if (x != 0) {
        theta = atan(y / x); // theta = tan^(-1)(y / x)
    } else {
        // Handle division by zero (x = 0)
        if (y > 0) {
            theta = M_PI / 2; // 90 degrees
        } else if (y < 0) {
            theta = -M_PI / 2; // -90 degrees
        } else {
            theta = 0; // Undefined for (0, 0)
        }
    }

    // Convert theta to degrees
    theta = theta * 180 / M_PI;

    // Display polar coordinates
    printf("Polar coordinates (r, theta): (%.2f, %.2f degrees)\n", r, theta);

    return 0;
}
