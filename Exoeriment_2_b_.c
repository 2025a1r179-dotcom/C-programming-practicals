#include <stdio.h>
#define PI 3.1416

int main() {
    float radius, length, width, side;

    // Input for Circle
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    float circle_area = PI * radius * radius;
    float circle_perimeter = 2 * PI * radius;

    // Input for Rectangle
    printf("\nEnter length and width of the rectangle: ");
    scanf("%f %f", &length, &width);

    float rectangle_area = length * width;
    float rectangle_perimeter = 2 * (length + width);

    // Input for Square
    printf("\nEnter side of the square: ");
    scanf("%f", &side);

    float square_area = side * side;
    float square_perimeter = 4 * side;

    // Output
    printf("\n=== Circle ===\n");
    printf("Area: %.2f\n", circle_area);
    printf("Perimeter: %.2f\n", circle_perimeter);

    printf("\n=== Rectangle ===\n");
    printf("Area: %.2f\n", rectangle_area);
    printf("Perimeter: %.2f\n", rectangle_perimeter);

    printf("\n=== Square ===\n");
    printf("Area: %.2f\n", square_area);
    printf("Perimeter: %.2f\n", square_perimeter);

    return 0;
}

