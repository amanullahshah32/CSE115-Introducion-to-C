#include <stdio.h>

int main()
{
    int X[100];
    int n, newValue;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 0 || n >= 100)
    {
        printf("Invalid n!\n");
        return 1;
    }

    printf("Enter %d integers for the array:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &X[i]);
    }

    printf("Enter new value to insert after the first %d elements: ", n);
    scanf("%d", &newValue);

    X[n] = newValue;  

    printf("Array after insertion:\n");
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d ", X[i]);
    }
    printf("\n");

    return 0;
}