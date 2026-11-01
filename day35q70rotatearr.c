#include <stdio.h>

int main()
{
    int a[100], n, i, j, k, last; //rotate an array k positions to the right.

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the number of positions to rotate: ");
    scanf("%d", &k);

    for(j = 0; j < k; j++)
    {
        last = a[n-1];

        for(i = n-1; i > 0; i--)
            a[i] = a[i-1];

        a[0] = last;
    }

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}