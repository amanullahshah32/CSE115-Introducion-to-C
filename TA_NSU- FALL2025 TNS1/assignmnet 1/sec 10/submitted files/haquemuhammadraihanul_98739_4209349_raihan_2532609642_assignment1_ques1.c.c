#include <stdio.h>

int main(void)
{
    int arr[100], n, i, k, newValue;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d unique integers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter index k to modify (0 to %d): ", n - 1);
    scanf("%d", &k);

    printf("Enter new value: ");
    scanf("%d", &newValue);

    if (k >= 0 && k < n)
        arr[k] = newValue;
    else
        printf("Invalid index!\n");

    printf("Array after modification:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

