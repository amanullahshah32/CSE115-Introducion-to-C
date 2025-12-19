#include <stdio.h>

void shiftArr1Pos(int arr1[], int arrSize)
{
    int first = arr1[0];  // store first element

    for (int i = 0; i < arrSize - 1; i++)
    {
        arr1[i] = arr1[i + 1];   // shift left
    }

    arr1[arrSize - 1] = first; // move first element to end
}

void arr1Rotate(int arr1[], int arrSize, int rotFrom)
{
    rotFrom = rotFrom % arrSize;  // avoid unnecessary rotations

    for (int i = 0; i < rotFrom; i++)
    {
        shiftArr1Pos(arr1, arrSize);  // shift once
    }
}

int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int rot;
    printf("Enter number of positions to rotate: ");
    scanf("%d", &rot);

    arr1Rotate(arr, n, rot);

    printf("\nArray after rotation:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
