#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, k;
    int arr[size];
    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter %d unique integers:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter index (k) to delete: ");
    scanf("%d", &k);

    if (k < 0 || k >= size)
    {
        printf("invalid index\n", size - 1);
        return 0;
    }

    for (int i = k; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
    printf("Updated array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
