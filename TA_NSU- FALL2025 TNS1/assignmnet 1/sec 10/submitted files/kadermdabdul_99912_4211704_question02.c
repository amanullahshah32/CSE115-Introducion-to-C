#include <stdio.h>

int main()
{
    int n, k;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d unique integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter index k to delete (0 to %d): ", n - 1);
    scanf("%d", &k);

    if (k < 0 || k >= n)
    {
        printf("Invalid index!\n");
        return 1;
    }

    printf("Deleting element at index %d: %d\n", k, arr[k]);

    // shift left
    for (int i = k; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    printf("Array after deletion (size %d):\n", n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}