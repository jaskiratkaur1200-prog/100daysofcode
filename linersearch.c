#include <stdio.h>

int main()
{
    int a[6] = {10, 20, 30, 40, 50, 60};
    int key = 50;

    for(int i = 0; i < 6; i++)
    {
        if(a[i] == key)
        {
            printf("Found at index %d", i);
            break;
        }
    }

    return 0;
}