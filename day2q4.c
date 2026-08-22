#include <stdio.h>

int main() {
    float r,pi = 3.14;

    printf("Enter the radius: ");
    scanf("%f", &r);
    printf("Area of circle = %.2f\n", pi*r*r);
    printf("Circumference of circle = %.2f", 2*pi*r);
    return 0;
}