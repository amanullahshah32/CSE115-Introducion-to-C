#include <stdio.h>

void shiftArr1Pos(int arr[], int arrSize)
{
    int first = arr[0];
    for(int i = 0; i < arrSize - 1; i++)
        arr[i] = arr[i + 1];
    arr[arrSize - 1] = first;
}

void arr1Rotate(int arr[], int arrSize, int rotFrom)
{
    printf("\nFrom index %d Position, array elements are: ", rotFrom);
    for(int i = rotFrom; i < arrSize; i++)
        printf("%d ", arr[i]);
    printf("\n");

    printf("\nArray elements prior to index %d: ", rotFrom);
    for(int i = 0; i < rotFrom; i++)
        printf("%d ", arr[i]);
    printf("\n");
    int temp[100];
    int k = 0;


    for(int i = rotFrom; i < arrSize; i++)
        temp[k++] = arr[i];

    for(int i = 0; i < rotFrom; i++)
        temp[k++] = arr[i];

    for(int i = 0; i < arrSize; i++)
        arr[i] = temp[i];


    printf("After rotating from index %d, the array is: ", rotFrom);
    for(int i = 0; i < arrSize; i++)
        printf("%d ", arr[i]);
    printf("\n");

}

int main()
{
    int arr[100], n, rotFrom;

    printf("\nEnter number of array elements: ");
    scanf("%d", &n);

    printf("\nEnter array elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nEnter rotation starting index: ");
    scanf("%d", &rotFrom);

    arr1Rotate(arr, n, rotFrom);

    return 0;
}

