#include <stdio.h>
int main() {
    float a, b, quotient;
    printf("Enter two numbers: ");
    scanf("%f%f", &a, &b);
    quotient = a / b;
    printf("Quotient = %.2f\n", quotient);
    return 0;
}
