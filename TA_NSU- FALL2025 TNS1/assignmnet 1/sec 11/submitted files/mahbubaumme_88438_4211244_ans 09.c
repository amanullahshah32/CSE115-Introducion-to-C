#include <stdio.h>

void shiftArr1Pos(int arr1[], int arrSize)
{
    int i, first;
    first = arr1[0];
    for (i = 0; i < arrSize - 1; i++)
    {
        arr1[i] = arr1[i + 1];
    }

    arr1[arrSize - 1] = first;
}

void arr1Rotate(int arr1[], int arrSize, int rotFrom)
{
    int i;
    for (i = 0; i < rotFrom; i++)
    {
        shiftArr1Pos(arr1, arrSize);
    }
}

int main()
{
    int arr[100], n, rot, i;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter rotation number: ");
    scanf("%d", &rot);

    arr1Rotate(arr, n, rot);

    printf("Array after rotation:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

