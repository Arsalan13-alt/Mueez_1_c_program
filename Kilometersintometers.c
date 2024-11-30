#include <stdio.h>

int main() {
    float kilometers, meters;

    // Input: Get the distance in kilometers from the user
    printf("Enter distance in kilometers: ");
    scanf("%f", &kilometers);

    // Conversion: 1 kilometer = 1000 meters
    meters = kilometers * 1000;

    // Output: Display the result in meters
    printf("%.2f kilometers is equal to %.2f meters.\n", kilometers, meters);

    return 0;
}
