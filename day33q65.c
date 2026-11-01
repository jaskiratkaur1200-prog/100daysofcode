#include <stdio.h>

int main()
{
    int a[6] = {10, 20, 30, 40, 50, 60}; // ques- searching in a sorted array using binary search.
    int key = 40;
    int low = 0, high = 5, mid;

    for(int i = 0; low <= high; i++){

        mid = (low + high) / 2;

        if(a[mid] == key){    //remember these three conditions for binary search.
            printf("Element found at index %d", mid);
            break;
        }
        else if(a[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    if(low > high)
    {
        printf("Element not found");
    }

    return 0;
}