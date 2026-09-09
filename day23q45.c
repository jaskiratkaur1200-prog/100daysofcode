#include <stdio.h>
int main (){
    int n;
    float sum=0; // find the sum of series 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        sum= sum + (float)(2*i)/(4*i -1);
    }
    printf("Sum of series is: %.2f", sum);
}