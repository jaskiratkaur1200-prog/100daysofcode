#include <stdio.h>
int main (){
    int a,b;
    printf("Enter the value of a and b:"); //Write a program to find LCM of two numbers.
    scanf("%d,%d",&a,&b);

    for ( int i = 1;i<=a*b ; i++) {
        if (i % a == 0 && i % b == 0) {
            printf("LCM = %d", i);
            break;
        }
    }
}