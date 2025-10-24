#include <stdio.h>
int main() {
    float l, area, perimeter;
    printf("Enter length of square: ");
    scanf("%f", &l);
    area = l * l;
    perimeter = 4 * l;
    printf("Area = %.2f\nPerimeter = %.2f\n", area, perimeter);
    return 0;
}
