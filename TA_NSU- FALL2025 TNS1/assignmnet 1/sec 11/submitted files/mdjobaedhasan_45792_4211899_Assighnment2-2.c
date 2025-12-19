
#include <stdio.h>

int main()
    {
    int n, k, i;
        printf("Enter array size : ");
        scanf("%d", &n);
    int arr[n];
        printf("Enter %d unique integers :\n", n);
    for( i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        printf("Give index to delete : ");
        scanf("%d", &k);

    for( i = k; i < n-1; i++)
        arr[i] = arr[i+1];
        printf(" after deletion: ");

    for( i = 0; i < n-1; i++)
        printf("%d ", arr[i]);

    return 0;
    }
