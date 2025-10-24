#include <stdio.h>
int main() {
    float l, b, area, perimeter;
    printf("Enter length and breadth: ");
    scanf("%f%f", &l, &b);
    area = l * b;
    perimeter = 2 * (l + b);
    printf("Area = %.2f\nPerimeter = %.2f\n", area, perimeter);
    return 0;
}
