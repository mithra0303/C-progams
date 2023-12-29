#include <stdio.h>

int main() {
    // Declare variables
    int number, digit, sum = 0;

    // Input a five-digit number
    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    // Check if the entered number is a five-digit number
    if (number < 10000 || number > 99999) {
        printf("Invalid input. Please enter a five-digit number.\n");
        return 1; // Exit with an error code
    }

    // Calculate the sum of digits
    while (number > 0) {
        digit = number % 10; // Extract the last digit
        sum += digit; // Add the digit to the sum
        number /= 10; // Remove the last digit
    }

    // Display the result
    printf("Sum of digits: %d\n", sum);

    return 0;
}
