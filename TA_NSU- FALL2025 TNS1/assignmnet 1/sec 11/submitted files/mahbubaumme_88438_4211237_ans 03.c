#include <stdio.h>

int main()
{
    int n,k,value;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[100];

    printf("Enter %d unique integers:\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter index to insert: ");
    scanf("%d", &k);

    printf("Enter value to insert: ");
    scanf("%d", &value);


    for(int i = n; i > k; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[k] = value;
    n++;

    printf("Array after insertion: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

