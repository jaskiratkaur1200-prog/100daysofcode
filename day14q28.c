#include <stdio.h>
int main (){
    int n,product=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        product = product *(2* i);
    }
    printf("Product of natural even numbers is: %d",product);

}