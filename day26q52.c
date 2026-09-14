#include <stdio.h>

int main() {

    for (int i = 1; i <= 5; i++) {

        int n;
        if (i == 1)
            n = 1;
        else if (i == 2)
            n = 3;
        else if (i == 3)
            n = 5;
        else if (i == 4)
            n = 3;
        else
            n = 1;

        for (int j = 1; j <= n; j++) {
            printf("*\n");
        }

        printf("\n");
    }
}