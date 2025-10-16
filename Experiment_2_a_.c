#include <stdio.h>

int main() {
    int a = 20;
    int b = 6;

    // Addition
    int sum = a + b;
    // Subtraction
    int difference = a - b;
    // Multiplication
    int product = a * b;
    // Remainder (modulo)
    int remainder = a % b;

    // Print the results
    printf("a = %d, b = %d\n", a, b);
    printf("Addition: %d + %d = %d\n", a, b, sum);
    printf("Subtraction: %d - %d = %d\n", a, b, difference);
    printf("Multiplication: %d * %d = %d\n", a, b, product);
    printf("Remainder: %d %% %d = %d\n", a, b, remainder);

    return 0;
}

