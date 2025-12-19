#include <stdio.h>

void shiftArr1Pos(int arr[], int arrSize)
{
    int first = arr[0];
    int i;
    for (i = 0; i < arrSize - 1; i++)
        arr[i] = arr[i + 1];    // shift left by 1
    arr[arrSize - 1] = first;   // first element goes to last
}

void arr1Rotate(int arr[], int arrSize, int rotFrom)
{
    int i;
    for (i = 0; i < rotFrom; i++)
        shiftArr1Pos(arr, arrSize);
}

int main(void)
{
    int arr[100], n, i, rotFrom;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d array elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter index to rotate from (rotFrom): ");
    scanf("%d", &rotFrom);

    printf("From index %d position, array elements are: ", rotFrom);
    for (i = rotFrom; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    printf("Array elements prior to index %d: ", rotFrom);
    for (i = 0; i < rotFrom; i++)
        printf("%d ", arr[i]);
    printf("\n");

    arr1Rotate(arr, n, rotFrom);

    printf("After rotating from index %d, the array is: ", rotFrom);
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

