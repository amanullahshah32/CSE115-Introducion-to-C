#include <stdio.h>
#include <stdlib.h>

//9) Write a C program to rotate an array by N positions (N to be given by user). Function prototype: void shiftArr1Pos (int arr1[], int arrSize); void arr1Rotate (int arr1[], int arrSize, int rotFrom)

void shiftArr1Pos(int arr1[], int arrSize)
{
    int first = arr1[0];
    for (int i = 0; i < arrSize - 1; i++)
    {
         arr1[i] = arr1[i + 1];
    }
    arr1[arrSize - 1] = first;
}

void arr1Rotate(int arr1[], int arrSize, int rotFrom)
{
    for (int i = 0; i < rotFrom; i++)
    {
        shiftArr1Pos(arr1, arrSize);
    }
}

int main()
{
    int n, rot;
    printf("Enter Elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate: ");
    scanf("%d", &rot);
    rot = rot % n;
    arr1Rotate(arr, n, rot);

    printf("Array after rotation: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

return 0;
}
