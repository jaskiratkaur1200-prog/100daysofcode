#include <stdio.h>
int main(){
    int n; // find the sum of series 1+3/4+5/6+7/8+9/10+11/12+...n terms
    float sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        if ( i==1)
        sum = sum +1;
        else
        sum= sum +(float)(2*i - 1)/(2*i);
    }
    printf("Sum of series is: %.2f",sum);

}