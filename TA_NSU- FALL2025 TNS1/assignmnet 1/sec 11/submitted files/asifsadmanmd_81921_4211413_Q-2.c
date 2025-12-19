#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d unique integers: \n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Give index to delete: ");
    scanf("%d", &k);

    for(int i = k; i < n - 1; i++)
    {
        arr[i] = arr[i+1];
    }

    printf("New OUTPUT Array: ");
    for(int i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
