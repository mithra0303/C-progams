#include <stdio.h>

int main() {
    float distanceInKm, distanceInMeters, distanceInFeet, distanceInInches, distanceInCentimeters;

    printf("Enter the distance between two cities (in killometers): ");
    scanf("%f", &distanceInKm);

    distanceInMeters = distanceInKm * 1000;

    distanceInFeet = distanceInMeters * 3.28084;

    distanceInInches = distanceInFeet * 12;

    distanceInCentimeters = distanceInMeters * 100;

    printf("Distance in Meters: %.2f\n", distanceInMeters);
    printf("Distance in Feet:%.2f\n", distanceInFeet);
    printf("Distance in Inches:%.2f\n", distanceInInches);
    printf("Distance in Centimeters:%2f\n", distanceInCentimeters);

    return 0;
    
}