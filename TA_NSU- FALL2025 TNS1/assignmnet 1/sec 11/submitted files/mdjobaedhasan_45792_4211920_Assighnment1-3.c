#include <stdio.h>

int main()
    {
    int n, k, i, value;
        printf("Give the array size : ");
        scanf("%d", &n);
    int arr[n];
        printf("Enter %d the unique integers :\n", n);

    for( i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        printf("Enter index : ");
        scanf("%d", &k);
        printf("Enter Renew value : ");
        scanf("%d", &value);
        arr[k] = value;
        printf("Modified the array : ");

    for( i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
    }
