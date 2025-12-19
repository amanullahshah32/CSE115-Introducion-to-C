#include <stdio.h>
#include <stdlib.h>

//4) Consider an array int X[100]. Populate the first n elements of the array (n to be taken from user). Populate the first n elements of the array, then add/insert a new element after the first n element.

int main()
{
    int X[100];
    int n, new_element;

    printf("Enter n : \n");
    scanf("%d", &n);

    printf("Enter elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &X[i]);
    }

    printf("Enter the new element to insert after the first %d elements: \n", n);
    scanf("%d", &new_element);

    X[n] = new_element;
    n++;

    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", X[i]);
    }

    return 0;
}

