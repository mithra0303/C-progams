#include <stdio.h>

int main() {
    // Declare variables
    float number;

    // Input a number
    printf("Enter a number: ");
    scanf("%f", &number);

    // Calculate and display the absolute value
    printf("Absolute value of %.2f is %.2f\n", number, (number < 0) ? -number : number);

    return 0;
}
