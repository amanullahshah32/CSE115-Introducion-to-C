/* 4. Consider an array int X[100].
Populate the first n elements of the array (n to be taken
from user).
Populate the first n elements of the array, then add/insert a new element
after the first n element */

#include <stdio.h>

int main() {
    int X[100];
    int n, i, newElement;

    printf("Enter the value of n (less than or equal to 100): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
         scanf("%d", &X[i]);
    }

    printf("Enter the new element to insert: ");
    scanf("%d", &newElement);

    for(i = n; i > 0; i--)
    {
        X[i] = X[i - 1];
    }


    X[n] = newElement;

    printf("Array after insertion:\n");
    for(i = 0; i <= n; i++)
    {
        printf("%d ", X[i]);
    }

    return 0;
}
