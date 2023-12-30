#include <stdio.h>

int main() {
    float hardness, carbonContent, tensileStrength;
    int grade;

    // Input values from the user
    printf("Enter hardness, carbon content, and tensile strength of the steel:\n");
    printf("Hardness: ");
    scanf("%f", &hardness);
    printf("Carbon Content: ");
    scanf("%f", &carbonContent);
    printf("Tensile Strength: ");
    scanf("%f", &tensileStrength);

    // Check conditions and assign grade
    if (hardness > 50 && carbonContent < 0.7 && tensileStrength > 5600) {
        grade = 10;
    } else if (hardness > 50 && carbonContent < 0.7) {
        grade = 9;
    } else if (carbonContent < 0.7 && tensileStrength > 5600) {
        grade = 8;
    } else if (hardness > 50 && tensileStrength > 5600) {
        grade = 7;
    } else if (hardness > 50 || carbonContent < 0.7 || tensileStrength > 5600) {
        grade = 6;
    } else {
        grade = 5;
    }

    // Output the grade of the steel
    printf("Grade of the steel: %d\n", grade);

    return 0;
}
