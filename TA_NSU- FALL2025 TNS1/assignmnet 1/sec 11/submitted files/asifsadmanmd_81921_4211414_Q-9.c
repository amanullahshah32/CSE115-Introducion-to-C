#include <stdio.h>
#include <stdlib.h>

void shiftArr1Pos(int arr[], int arrSize)
{
    int temp = arr[0];
    for(int i = 1; i < arrSize; i++)
    {
        arr[i-1] = arr[i];
    }
    arr[arrSize-1] = temp;
}

void arr1Rotate(int arr[], int arrSize, int rotFrom)
{
    for(int i = 0; i < rotFrom; i++)
    {
        shiftArr1Pos(arr, arrSize);
    }
}

int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: \n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int rot;
    printf("Enter N (index/positions to rotate): ");
    scanf("%d", &rot);

    printf("Array elements prior to index %d: ", rot);
    for(int i = 0; i < rot; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("From index %d position array elements are: ", rot);
    for(int i = rot; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    arr1Rotate(arr, n, rot);

    printf("New array after rotating: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
