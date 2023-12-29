#include <stdio.h>

int main() {
    // Declare variables
    int C, D, temp;

    // Input two numbers
    printf("Enter the value for C: ");
    scanf("%d", &C);

    printf("Enter the value for D: ");
    scanf("%d", &D);

    // Swap the contents of C and D using a temporary variable
    temp = C;
    C = D;
    D = temp;

    // Display the swapped values
    printf("After swapping:\n");
    printf("C: %d\n", C);
    printf("D: %d\n", D);

    return 0;
}
