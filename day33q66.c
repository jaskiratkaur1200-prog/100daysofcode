#include <stdio.h>

int main() {
    int n, a[100], x, i;   // ques- inserting an element in a sorted array at a appropriate position.

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &x);

    for (i = n - 1; i >= 0; i--) {
        if (a[i] < x) {
            a[i + 1] = a[i];
        
        }
        else {
            break;     //take i where the loop stops.
        }
    }

    a[i + 1] = x;
    n++;

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}