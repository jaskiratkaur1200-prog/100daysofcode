#include <stdio.h>
int main(){
    int n,sum=0,remainder; 
    printf("Enter the value of n:");
    scanf("%d",&n); 
    // Calculate sum of digits
    while(n!=0){
        remainder= n%10;
        sum=sum+remainder;
        n=n/10;
    }
    printf("Sum of digits = %d", sum);
}