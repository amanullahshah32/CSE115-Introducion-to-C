#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, k, x;
    int arr[size];

    printf("Enter size of array: ");
    scanf("%d", &size);

    printf("Enter unique integers:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter index k to modify: ");
    scanf("%d", &k);

    if (k < 0 || k >= size)
    {
        printf("invalid index, index must be between 0 and %d\n", size - 1);
        return 0;
    }

    printf("Enter new value to replace the value in index k: ");
    scanf("%d", &x);

    arr[k] = x;

    printf("\nUpdated array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("For index %d, current value: %d \n", i, arr[i]);
    }

    printf("\n");
    return 0;
}
