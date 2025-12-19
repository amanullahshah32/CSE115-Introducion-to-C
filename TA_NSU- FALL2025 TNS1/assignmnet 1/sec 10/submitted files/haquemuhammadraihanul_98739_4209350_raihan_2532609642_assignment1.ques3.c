#include <stdio.h>

int main(void)
{
    int arr[100], n, i, k, value;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d unique integers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter index k to insert at (0 to %d): ", n);
    scanf("%d", &k);

    printf("Enter value to insert: ");
    scanf("%d", &value);

    if (k >= 0 && k <= n && n < 100) {
        for (i = n; i > k; i--)
            arr[i] = arr[i - 1];   // shift right
        arr[k] = value;
        n++;
    } else {
        printf("Invalid index or array full!\n");
    }

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

