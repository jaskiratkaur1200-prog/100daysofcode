#include <stdio.h>

int main() {
    int n, binary = 0, place = 1, rem;

    printf("Enter a number: ");
    scanf("%d", &n);
//Write a program to convert decimal to binary.
    while (n > 0) {
        rem = n % 2;
        binary = binary + rem * place;
        n = n / 2;
        place = place * 10;
    }

    printf("Binary representation: %d", binary);
}