#include <stdio.h>
#include <math.h>

int main() {
    float P, R, T, SI, CI;

    printf("Enter Principal: ");
    scanf("%f", &P);

    printf("Enter Rate: ");
    scanf("%f", &R);

    printf("Enter Time: ");
    scanf("%f", &T);

    // Simple Interest
    SI = (P * R * T) / 100;

    // Compound Interest
   CI = P * pow(1 + R / 100, T) - P; //,T is in whole power of 1 + R/100.pow is function in c used to calculate powers.

    printf("Simple Interest = %.2f\n", SI);
    printf("Compound Interest = %.2f\n", CI);

    return 0;
}