#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables
    double t, v, wcf;

    // Input temperature and wind velocity
    printf("Enter the temperature (in degrees Fahrenheit): ");
    scanf("%lf", &t);

    printf("Enter the wind velocity (in miles per hour): ");
    scanf("%lf", &v);

    // Calculate wind chill factor using the formula
    wcf = 35.74 + 0.6215 * t + (0.4275 * t - 35.75) * pow(v, 0.16);

    // Display the result
    printf("Wind Chill Factor: %.2f\n", wcf);

    return 0;
}
