#include <stdio.h>

int main() {
    int n, a[100], pos, x;   //insert an element at a given position in an array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &pos);
    printf("Enter the element to be inserted: ");
    scanf("%d", &x);

    if (pos < 1 || pos > n + 1 || n >= 100) { //index 0 se starts nd position from 1.
        printf("Invalid position or array full");
        return 0;
    }

    for (int i = n; i >= pos; i--) { //shift elements to the right
        a[i] = a[i - 1];
    }

    a[pos - 1] = x; //insert
    n++; //increment size of array

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}