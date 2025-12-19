//Rohan Rajib Chowdhury
//ID 2312932043

#include <stdio.h>

void shiftArr1Pos(int arr1[], int arrSize);
void arr1Rotate(int arr1[], int arrSize, int rotFrom);

int main()
{
    int arr[20], n, rotFrom, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter rotation index: ");
    scanf("%d", &rotFrom);

    printf("From index %d Position, array elements are: ", rotFrom);
    for (i = rotFrom; i < n; i++)
        printf("%d ", arr[i]);

    printf("\nArray elements prior to index %d: ", rotFrom);
    for (i = 0; i < rotFrom; i++)
        printf("%d ", arr[i]);

    arr1Rotate(arr, n, rotFrom);

    printf("\nAfter rotating from index %d, the array is: ", rotFrom);
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

void shiftArr1Pos(int arr1[], int arrSize)
{
    int first = arr1[0], i;

    for (i = 0; i < arrSize - 1; i++)
        arr1[i] = arr1[i + 1];

    arr1[arrSize - 1] = first;
}

void arr1Rotate(int arr1[], int arrSize, int rotFrom)
{
    int i;
    for (i = 0; i < rotFrom; i++)
        shiftArr1Pos(arr1, arrSize);
}
