#include <stdio.h>

int main()
{
    int arr [100] = {1, 2, 3, 4, 5};
    int n = 5;
    int k, newValue;

    printf("Array before insertion: ");
    for(int i = 0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");

    printf("\Enter index k to insert at (0 to %d): ",n-1);
    scanf("%d", &k);
    printf("Enter a new value to insert: ");
    scanf("%d",&newValue);

    //Updated array
    for(int i=n; i>k; i--)
        {
            arr[i] = arr[i-1];
        }
        arr[k] = newValue;
        n++;
        printf("Array after insertion: ");
        for(int i=0; i<n; i++)
        {
            printf("%d ",arr[i]);
        }

    return 0;
}
