#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X[100];
    int n, x;

    printf("Enter number of elements n: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &X[i]);
    }

    printf("Enter the new element to insert: ");
    scanf("%d", &x);

    X[n] = x;
    n++;

    printf("Updated array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", X[i]);
    }
    printf("\n");
    return 0;
}
