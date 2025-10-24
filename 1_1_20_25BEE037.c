#include <stdio.h>
int main() {
    float h, b, area;
    printf("Enter height and base: ");
    scanf("%f%f", &h, &b);
    area = (h * b) / 2;
    printf("Area of triangle = %.2f\n", area);
    return 0;
}
