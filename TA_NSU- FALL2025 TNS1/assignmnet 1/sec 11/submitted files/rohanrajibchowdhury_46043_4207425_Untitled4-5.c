//Rohan Rajib Chowdhury
//ID 2312932043

#include <stdio.h>

int main()
{
    int X[100];
    int n, i, newElement;

    printf("Enter number of elements (n): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &X[i]);
    }

    printf("Enter new element to insert after first %d elements: ", n);
    scanf("%d", &newElement);

    X[n] = newElement;
    n = n + 1;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", X[i]);
    }

    return 0;
}
