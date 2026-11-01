#include <stdio.h>

int main()
{
    int a[6]={1,2,3,4,5,6};
    int i, pos, n=6;

    printf("Enter the position of the element to be deleted: ");
    scanf("%d", &pos);

    for(i = pos-1; i < n-1; i++) //shift left.pos-1 because array index starts from 0
        a[i] = a[i+1];

    n--;

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}