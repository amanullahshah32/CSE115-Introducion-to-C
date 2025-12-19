#include <stdio.h>
int main()
{
    int n, k, value;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n + 1];
    printf("\nEnter the elements of the array:\n", n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("\nEnter index k to insert at: ");
    scanf("%d", &k);
    printf("Enter value to insert: ");
    scanf("%d", &value);

    if(k>=0 && k<=n)
    {
        for(int i=n; i>k; i--)
            arr[i] = arr[i-1];

        arr[k] = value;
        n++;
    }

    printf("\nArray after insertion:\n");
    for(int i=0; i<n; i++)
        printf("%d ", arr[i]);

    return 0;
}
