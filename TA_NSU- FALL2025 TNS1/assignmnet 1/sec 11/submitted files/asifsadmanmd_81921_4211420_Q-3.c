#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n+1];
    printf("Enter %d unique integers: \n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int k, value;
    printf("Enter index to insert: ");
    scanf("%d", &k);
    printf("Enter value: ");
    scanf("%d", &value);

    for(int i = n; i > k; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[k] = value;

    printf("Output Array: ");
    for(int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
