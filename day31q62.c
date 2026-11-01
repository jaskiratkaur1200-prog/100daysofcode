#include <stdio.h>

int main(){ //q-reverse an array.
    int a[100], n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    printf("Elements in reverse order: ");
    for(int i = n - 1; i >= 0; i--)
    printf("%d ", a[i]);

    return 0;
}