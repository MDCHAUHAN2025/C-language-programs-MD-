#include <stdio.h>
int main() {
    float dollars, pounds;
    pounds = 0;
    printf("Enter dollars: ");
    scanf("%f", &dollars);
    pounds = (dollars * 48) / 70;
    printf("%.2f dollars = %.2f pounds\n", dollars, pounds);
    return 0;
}
