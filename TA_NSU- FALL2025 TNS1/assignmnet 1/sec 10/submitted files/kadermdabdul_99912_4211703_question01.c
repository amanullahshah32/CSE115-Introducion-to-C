#include <stdio.h>

int main()
{
    int n, k, newvalue;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d unique integers:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter index k to modify (0 to %d): ", n - 1);
    scanf(" %d", &k);

    if (k < 0 || k >= n)
    {
        printf("Invalid index!\n");
        return 1;
    }

    printf("Enter new value: ");
    scanf(" %d", &newvalue);

    printf("Old value at index %d: %d\n", k, arr[k]);

    arr[k] = newvalue;

    printf("Modified array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}