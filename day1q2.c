#include<stdio.h>
main(){
    float a, b;
    printf("Enter two floating-point numbers: ");
    scanf("%f %f", &a, &b);
    printf("%f", a+b);
    printf("\n%f%f", a-b);
    printf("\n%f%f", a*b);
    return 0;
}