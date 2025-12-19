#include <stdio.h>

void RevArr(int arr[], int size)
{
    int i, j, temp;
    for (i = 0, j = size - 1; i < j; i++, j--) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main(void)
{
    int arr[100], n, i;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    RevArr(arr, n);

    printf("Reversed array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

