#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X[100];
    int n, value;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter %d elements: \n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &X[i]);
    }

    printf("Enter new element: ");
    scanf("%d", &value);

    X[n] = value;

    printf("Output array: ");
    for(int i = 0; i <= n; i++)
    {
        printf("%d ", X[i]);
    }

    return 0;
}
