#include <stdio.h>
int main(){
    int n,factorial=1;
    printf("Enter the value of n:");
    scanf("%d",&n); //Write a program to find factorial of a number.
    for(int i=1; i<=n; i++){
        factorial= factorial * i;
}
printf("Factorial of %d is: %d",n,factorial);
}