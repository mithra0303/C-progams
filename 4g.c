#include <stdio.h>

int main() {
    int red, green, blue;
    double white, cyan, magenta, yellow, black;

    // Input RGB values from the user
    printf("Enter RGB values (0 to 255):\n");
    printf("Red: ");
    scanf("%d", &red);
    printf("Green: ");
    scanf("%d", &green);
    printf("Blue: ");
    scanf("%d", &blue);

    // Convert RGB to CMYK
    white = fmax(red / 255.0, fmax(green / 255.0, blue / 255.0));

    if (white == 0.0) {
        // If RGB values are all 0, set CMYK to 0, 0, 0, 1
        cyan = magenta = yellow = 0.0;
        black = 1.0;
    } else {
        cyan = (white - red / 255.0) / white;
        magenta = (white - green / 255.0) / white;
        yellow = (white - blue / 255.0) / white;
        black = 1.0 - white;
    }

    // Output CMYK values
    printf("CMYK values:\n");
    printf("Cyan: %.4f\n", cyan);
    printf("Magenta: %.4f\n", magenta);
    printf("Yellow: %.4f\n", yellow);
    printf("Black: %.4f\n", black);

    return 0;
}
