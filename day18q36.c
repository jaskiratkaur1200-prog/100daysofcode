#include <stdio.h>

int main() {
    int a, b, remainder;
//Write a program to find HCF of two numbers.
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while (b != 0) {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    printf("HCF = %d", a);
}