#include <stdio.h>

int main() {
    int n, digit, result = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%d", &n);
//Write a program to find 1's complement(flipping every bit) of a binary number.
    while (n != 0) {
        digit = n % 10;

        if (digit == 0)
            digit = 1;
        else
            digit = 0;

        result = result + digit * place;
        place = place * 10;

        n = n / 10;
    }

    printf("1's complement = %d", result);
}