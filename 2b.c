#include <stdio.h>

int main() {
    // Declare variables
    int number, reversedNumber = 0;

    // Input a five-digit number
    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    // Check if the entered number is a five-digit number
    if (number < 10000 || number > 99999) {
        printf("Invalid input. Please enter a five-digit number.\n");
        return 1; // Exit with an error code
    }

    // Reverse the number
    while (number > 0) {
        int digit = number % 10; // Extract the last digit
        reversedNumber = reversedNumber * 10 + digit; // Build the reversed number
        number /= 10; // Remove the last digit
    }

    // Display the reversed number
    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}
