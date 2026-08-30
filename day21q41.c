#include <stdio.h>
int main (){
    int n,last,first,place=1; //swap first and last digit of a number
    printf("enter two numbers:");//a=original number, b=last, c=first of a, d=place
    scanf("%d %d",&n,&last);
    last=n%10;
    first=n;
   while(first>=10){
    first = first / 10;
        place= place * 10;
    }

    n = n % place;
    n = n / 10;
    n = last * place + n * 10 + first;
    printf("After swapping = %d", n);

}