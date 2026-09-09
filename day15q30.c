#include <stdio.h>

int main() {
    int n, reverse = 0, remainder;
    printf("Enter a number: "); //Write a program to reverse a number.
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10; //on writing this statmement after second statement,we get 0 at thr end of output.
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }
    printf("Reversed number = %d", reverse);
    return 0;
}