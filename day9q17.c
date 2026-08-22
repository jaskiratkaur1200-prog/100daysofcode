#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,D,root1,root2,realPart,imaginaryPart;
    printf("Enter the coefficients a, b and c: ");
    scanf("%f %f %f",&a,&b,&c);
    D=b*b-4*a*c;
    if(D>0){
        root1=(-b+sqrt(D))/(2*a); //sqrt() function is used to calculate the square root of a number.
        root2=(-b-sqrt(D))/(2*a);
        printf("Roots are real and distinct.\n");
        printf("Root 1 = %.2f\n",root1);
        printf("Root 2 = %.2f\n",root2);
    }
    else if(D==0){
        root1=root2=-b/(2*a);
        printf("Roots are real and equal.\n");
        printf("Root 1 = Root 2 = %.2f\n",root1);
    }
    else{
        realPart=-b/(2*a);
        imaginaryPart=sqrt(-D)/(2*a);
        printf("Roots are complex and imaginary.\n");
        printf("root 1 = %.2f + %.2f i\n", realPart ,imaginaryPart); //
        printf("root 2 = %.2f - %.2f i\n", realPart ,imaginaryPart);
    }
    return 0;
}