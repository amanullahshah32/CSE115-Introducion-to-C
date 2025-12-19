#include <stdio.h>

int main()
{
    int X[100];
    int n, newValue;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &X[i]);
    }

    printf("Enter new element to insert after the %d-th element: ", n);
    scanf("%d", &newValue);

    
    X[n] = newValue;
    n++; 

    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", X[i]);
    }

    return 0;
}
