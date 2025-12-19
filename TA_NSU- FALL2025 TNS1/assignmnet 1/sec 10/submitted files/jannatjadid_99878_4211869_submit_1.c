#include <stdio.h>
int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d unique integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int k, newValue;
    printf("Enter index to modify: ");
    scanf("%d", &k);

    
    if (k < 0 || k >= n)
    {
        printf("Invalid index!\n");
        return 0;
    }

    printf("Enter new value: ");
    scanf("%d", &newValue);

    arr[k] = newValue;

    printf("Array after modification:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
