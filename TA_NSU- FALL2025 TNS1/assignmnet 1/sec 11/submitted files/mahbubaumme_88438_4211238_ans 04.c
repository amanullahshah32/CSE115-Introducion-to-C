#include <stdio.h>

int main()
{
    int X[100];
    int n, newElement;

    printf("Enter number of elements (n): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &X[i]);
    }

    printf("Enter the new element to insert: ");
    scanf("%d", &newElement);

    X[n] = newElement;
    n++;
    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", X[i]);
    }

    return 0;
}
