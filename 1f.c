#include <stdio.h>

int main() {
    // Initial dimensions of A0
    int width = 1189;
    int height = 841;

    printf("Paper Size A0: %d mm x %d mm\n", width, height);

    // Calculate and print dimensions for A1 to A8
    for (int i = 1; i <= 8; i++) {
        // Calculate dimensions for the next size
        int newWidth = height;
        int newHeight = width / 2;

        // Update dimensions for the next iteration
        width = newWidth;
        height = newHeight;

        // Print dimensions for the current size
        printf("Paper Size A%d: %d mm x %d mm\n", i, width, height);
    }

    return 0;
}
