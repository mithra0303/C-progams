#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables
    double angleInDegrees, angleInRadians;
    
    // Input angle in degrees
    printf("Enter the angle in degrees: ");
    scanf("%lf", &angleInDegrees);

    // Convert angle to radians
    angleInRadians = angleInDegrees * M_PI / 180;

    // Calculate and print trigonometric ratios
    printf("Sine of the angle: %.4f\n", sin(angleInRadians));
    printf("Cosine of the angle: %.4f\n", cos(angleInRadians));
    printf("Tangent of the angle: %.4f\n", tan(angleInRadians));
    printf("Cosecant of the angle: %.4f\n", 1 / sin(angleInRadians));
    printf("Secant of the angle: %.4f\n", 1 / cos(angleInRadians));
    printf("Cotangent of the angle: %.4f\n", 1 / tan(angleInRadians));

    return 0;
}
