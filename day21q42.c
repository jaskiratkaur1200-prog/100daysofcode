#include <stdio.h>

int main(){
    int n, i, sum = 0;

    printf("Enter a number: "); //check is a number is perfect or not.
    scanf("%d", &n);
    for (i = 1; i < n; i++){
        if (n % i == 0){
            sum = sum + i;
        }
    }

    if (sum == n){
        printf("Perfect number");
    }
    else{
        printf("Not a perfect number");
    }
}