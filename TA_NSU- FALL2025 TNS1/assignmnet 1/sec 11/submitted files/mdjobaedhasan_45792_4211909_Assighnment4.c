#include <stdio.h>

int main()
    {
    int X[100],n, value,i;
        printf("Enter n: ");
        scanf("%d", &n);
        printf("Enter %d elements :\n", n);

    for(i = 0; i < n; i++)
        scanf("%d", &X[i]);
        printf("Enter new elements : ");
        scanf("%d", &value);

        X[n] = value;
        printf("New array : ");

    for( i = 0; i <= n; i++)
        printf("%d ", X[i]);

    return 0;
    }
