#include <stdio.h>
int main(){
    int n,i,factorial=1,digit,sum=0; //check if  Number is a strong number(sum of factorial of digits is equal to the number itself)
    scanf("%d",&n);
    while(n>0){
    digit= n%10;
    factorial=1;

    for(i =1;i<=digit;i++){
        factorial=  factorial*i;
    }
    sum =sum+factorial;
    n=n/10;

}
    printf("%d",sum);

}
