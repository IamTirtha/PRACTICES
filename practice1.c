#include <stdio.h>

int main() {
    int a, b, c;

    // Input the three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Find the maximum
    int max = a; // Assume a is the maximum initially
    if (b > max) max = b;
    if (c > max) max = c;

    // Find the minimum
    int min = a; // Assume a is the minimum initially
    if (b < min) min = b;
    if (c < min) min = c;

    // Output the results
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    return 0;
}

