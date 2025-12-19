
#include <stdio.h>

int main()
{
    int n, k;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d unique integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the index (k) to delete: ");
    scanf("%d", &k);

    if (k >= 0 && k < n)
        {

        for (int i = k; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }

        n--;

        printf("Updated array: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Invalid index!\n");
    }

    return 0;
}
