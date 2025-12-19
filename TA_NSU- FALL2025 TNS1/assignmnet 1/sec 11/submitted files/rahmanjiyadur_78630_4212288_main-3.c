#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*
Consider an array int X[100]. Populate the first n elements of the array (n to be taken
from user). Populate the first n elements of the array, then add/insert a new element
after the first n element.
   */

    int X[100];
    int n, value;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &X[i]);
    }

    printf("Enter new element to insert after the first %d elements: ", n);
    scanf("%d", &value);

    X[n] = value;

    printf("Array after insertion:\n");
    for(int i = 0; i < n+1; i++){
        printf("%d ", X[i]);
    }

    return 0;
}
