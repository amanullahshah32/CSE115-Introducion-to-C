#include <stdio.h>

int main()
{
    int X[100], n, val;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &X[i]);

    printf("Enter value to insert: ");
    scanf("%d", &val);

    X[n] = val;
    n++;

    printf("Array after insertion:\n");
    for(int i = 0; i < n; i++)
        printf("%d ", X[i]);

    return 0;
}
