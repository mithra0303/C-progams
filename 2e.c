#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables
    double L1, L2, G1, G2, D;

    // Input latitude and longitude values for two places
    printf("Enter latitude (L1) of Place 1 in degrees: ");
    scanf("%lf", &L1);

    printf("Enter longitude (G1) of Place 1 in degrees: ");
    scanf("%lf", &G1);

    printf("Enter latitude (L2) of Place 2 in degrees: ");
    scanf("%lf", &L2);

    printf("Enter longitude (G2) of Place 2 in degrees: ");
    scanf("%lf", &G2);

    // Convert degrees to radians
    L1 = L1 * M_PI / 180;
    L2 = L2 * M_PI / 180;
    G1 = G1 * M_PI / 180;
    G2 = G2 * M_PI / 180;

    // Calculate distance using the formula
    D = 3963 * acos(sin(L1) * sin(L2) + cos(L1) * cos(L2) * cos(G2 - G1));

    // Display the result
    printf("Distance between the two places: %.2f nautical miles\n", D);

    return 0;
}
