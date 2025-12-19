#include <stdio.h>
int main()
{
    int n, newValue;
    printf("Enter n: ");
    scanf("%d", &n);

    int X[100];
    printf("\nEnter %d elements of the array:\n", n);
    for(int i=0; i<n; i++)
        scanf("%d", &X[i]);

    printf("\nEnter a new element to insert: ");
    scanf("%d", &newValue);

    X[n] = newValue;
    n++;

    printf("\nArray after insertion:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", X[i]);

    return 0;
}
